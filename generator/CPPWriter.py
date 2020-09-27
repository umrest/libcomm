import os
import shutil

from helpers import *

class CPPFieldSerializerWriter:
    def __init__(self, message, communication_definitions):
        self.message = message
        self.communication_definitions = communication_definitions
    
    def get_serializer2(self, field):
        if not is_primitive(field.type):
            return f"""
            auto ___{field.name} = _{field.name}.Serialize();
            uint8_t* __{field.name} = (uint8_t*)&___{field.name}[0];"""
        return f"""uint8_t* __{field.name} = (uint8_t*)&_{field.name};"""
    
    def get_serializer(self, field):
        return f"""
            {self.get_serializer2(field)}

            std::copy(__{field.name}, __{field.name} + {self.communication_definitions["PACKET_SIZES"][field.type.upper()]}, data.begin() + {field.name.upper()}_OFFSET);\n"""
    
    def get_deserializer2(self, field):
        if not is_primitive(field.type):
            return f"""
            std::vector<uint8_t> __{field.name}({self.communication_definitions["PACKET_SIZES"][field.type.upper()]});
            std::copy(data.begin() + {field.name.upper()}_OFFSET, data.begin() + {field.name.upper()}_OFFSET + {self.communication_definitions["PACKET_SIZES"][field.type.upper()]}, __{field.name}.begin());
            _{field.name}.Deserialize(__{field.name});"""
        return f"""std::copy(data.begin() + {field.name.upper()}_OFFSET, data.begin() + {field.name.upper()}_OFFSET + {self.communication_definitions["PACKET_SIZES"][field.type.upper()]}, (uint8_t *)&_{field.name});"""

    def get_deserializer(self, field):
        return f"""
        {self.get_deserializer2(field)}"""


class CPPFieldAccessorWriter:
    def __init__(self, message, communication_definitions):
        self.message = message
        self.communication_definitions = communication_definitions
    
    def accessor_type(self, field):
        if field.accessor:
            if field.accessor.type == "float":
                return "float"
        if is_primitive(field.type):
            return get_type(field.type, "cpp")
        return field.type
    
    def get_getter2(self, field):
        if field.accessor.type == "bit":
            return f"return _{field.bit_array.name}.GetBit({field.idx});"
        if field.accessor.type == "float":
            return f"return _{field.name} * {field.accessor.scale};"
        return f"return _{field.name};"
    
    def get_getter(self, field):
        if field.accessor.type == "bits":
            ret = ""
            for bit in field.accessor.bits:
                ret += self.get_getter(bit)
            return ret
        
        return f"""{self.accessor_type(field)} get_{field.name}(){{
                {self.get_getter2(field)}
            }}\n"""
    
    def get_setter2(self, field):
        if field.accessor.type == "bit":
            return f"_{field.bit_array.name}.SetBit({field.idx}, other);"
        elif field.accessor.type == "float":
            return f"_{field.name} = other / {field.accessor.scale};"
        elif field.type == "bytearray":
            return f"""std::copy(other, other + {self.communication_definitions["PACKET_SIZES"][field.type.upper()]}, (uint8_t *)&_{field.name});"""
        
        return f"_{field.name} = other;"
        
    def get_setter(self, field):
        if field.accessor.type == "bits":
            ret = ""
            for bit in field.accessor.bits:
                ret += self.get_setter(bit)
            return ret

        return f"""void set_{field.name}({self.accessor_type(field)} other){{
                {self.get_setter2(field)}
            }};\n"""

class CPPMessageWriter:
    def __init__(self, templates_dir, include_dir, src_dir, message, communication_definitions):
        self.templates_dir = templates_dir
        self.include_dir = include_dir
        self.src_dir = src_dir
        self.message = message
        self.communication_definitions = communication_definitions
    
    def get_requirements(self, interface = False):
        if interface:
            return f'#include "{self.message.name}Interface.h"\n'
        
        required_types = set()
        ret = ""
        for field in self.message.fields:
            if not is_primitive(field.type):
                required_types.add(field.type)
        for t in required_types:
            ret += f'#include "{t}.h"\n'
        return ret
    
    def get_accessors(self):
        ret = ""
        writer = CPPFieldAccessorWriter(self.message, self.communication_definitions)
        for field in self.message.fields:
            ret += writer.get_getter(field)
        ret += "\n"
        for field in self.message.fields:
            ret += writer.get_setter(field)
        return ret
    
    def get_serializer(self):
        ret = f"""std::vector<uint8_t> Serialize() {{
                     std::vector<uint8_t> data({self.communication_definitions["PACKET_SIZES"][self.message.name.upper()]});
                     """
        writer = CPPFieldSerializerWriter(self.message, self.communication_definitions)
        for field in self.message.fields:
            ret += writer.get_serializer(field)
        ret += f"""
        return data;
        }}
        """
        return ret
    
    def get_deserializer(self):
        ret = f"""void Deserialize(std::vector<uint8_t> data)  {{"""
        writer = CPPFieldSerializerWriter(self.message, self.communication_definitions)
        for field in self.message.fields:
            ret += writer.get_deserializer(field)
        ret += f"""}}
        """
        return ret
    
    def get_variables(self):
        ret = ""
        for field in self.message.fields:
            if field.type == "bytearray":
                ret +=  f"""char _{field.name}[{self.communication_definitions["PACKET_SIZES"][field.type.upper()]}];
                    """
            else:
                ret += f'{get_type(field.type, "cpp")} _{field.name};\n'
        return ret
    
    def get_offsets(self):
        ret = ""
        offset = 0
        for field in self.message.fields:
            ret += f'int {field.name.upper()}_OFFSET = {offset};\n'
            offset += self.communication_definitions["PACKET_SIZES"][field.type.upper()]
        return ret
    
    def get_type(self):
        if self.message.name.upper() in self.communication_definitions["TYPES"].keys():
            return f"CommunicationDefinitions::TYPE type(){{ return CommunicationDefinitions::TYPE::{self.message.name.upper()}; }}"
        return ""

    def write(self):
        template = open(os.path.join(self.templates_dir, "Packet.Interface.Template.txt")).read()
        
        template = template.replace("[[InterfaceType]]", self.message.name + "Interface")
        template = template.replace("[[Requirements]]", self.get_requirements())
        template = template.replace("[[Variables]]", self.get_variables())
        template = template.replace("[[Offsets]]", self.get_offsets())

        template = template.replace("[[Type]]", self.get_type())
        open(os.path.join(self.include_dir, self.message.name + "Interface" + ".h"), "w").write(template)

        
        template = open(os.path.join(self.templates_dir, "Packet.Template.txt")).read()
        template = template.replace("[[InterfaceType]]", self.message.name + "Interface")
        template = template.replace("[[MessageType]]", self.message.name)
        template = template.replace("[[Requirements]]",self.get_requirements(True))
        template = template.replace("[[Accessors]]", self.get_accessors())

        template = template.replace("[[Serializers]]", self.get_serializer() + self.get_deserializer())

        open(os.path.join(self.include_dir, self.message.name + ".h"), "w").write(template)
        


class CPPCommunicationDefinitionsWriter:
    def __init__(self, templates_dir, include_dir, src_dir, communication_definitions):
        self.templates_dir = templates_dir
        self.include_dir = include_dir
        self.src_dir = src_dir
        self.communication_definitions = communication_definitions

    
    def get_enum_header2(self, enum):
        ret = ""
        for key, value in enum.items():
            ret += f"{key} = {value},\n"

        return ret

    def get_enum_header(self, enum, name):
        ret = f"""enum class {name}
                {{
                    {self.get_enum_header2(enum)}
                }};"""
        return ret
    
    def get_map_header(self, map, name):
        return f"""
                """

    def get_map_source2(self, map):
        ret = ""
        for key, value in map.items():
            if key in self.communication_definitions["TYPES"].keys():
                ret += f"{{TYPE::{key}, {value}}},\n"

        return ret

    def get_map_source(self, map, name):
        return f"""
        const std::map<CommunicationDefinitions::TYPE, int> CommunicationDefinitions::PACKET_SIZES = {{
            {self.get_map_source2(map)}
        }};
                """
    
    def write(self):
        template = open(os.path.join(self.templates_dir, "CommunicationDefinitions.Template.h")).read()
        template = template.replace("[[ENUMS]]", self.get_enum_header(self.communication_definitions["TYPES"], "TYPE") + "\n" + self.get_enum_header(self.communication_definitions["IDENTIFIERS"], "IDENTIFIER"))
        template = template.replace("[[MAPS]]", self.get_map_header(self.communication_definitions["PACKET_SIZES"], "PACKET_SIZES"))
        open(os.path.join(self.include_dir, "CommunicationDefinitions.h"), "w").write(template)

        template = open(os.path.join(self.templates_dir, "CommunicationDefinitions.Template.cpp")).read()
        template = template.replace("[[MAPS]]", self.get_map_source(self.communication_definitions["PACKET_SIZES"], "PACKET_SIZES"))
        open(os.path.join(self.src_dir, "CommunicationDefinitions.cpp"), "w").write(template)


class CPPWriter:
    def __init__(self, cpp_dir):
        self.autogenerated_dir = os.path.abspath(os.path.join(cpp_dir, "autogenerated"))
        self.include_dir = os.path.join(self.autogenerated_dir, "include")
        self.src_dir = os.path.join(self.autogenerated_dir, "src")
        self.templates_dir = os.path.join(cpp_dir, "templates")

    def run(self, messages, communication_definitions):
        if os.path.exists(self.autogenerated_dir):
            shutil.rmtree(self.autogenerated_dir)
        os.mkdir(self.autogenerated_dir)
        os.mkdir(self.include_dir)
        os.mkdir(self.src_dir)
        for message in messages:
            CPPMessageWriter(self.templates_dir, self.include_dir, self.src_dir, message, communication_definitions).write()
        
        CPPCommunicationDefinitionsWriter(self.templates_dir, self.include_dir, self.src_dir, communication_definitions).write()
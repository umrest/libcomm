import os

from helpers import *

BitConverterMap = {
    "float": "Single",
    "double": "Double",

}

class CSharpFieldSerializerWriter:
    def __init__(self, message, communication_definitions):
        self.message = message
        self.communication_definitions = communication_definitions
    
    def get_serializer2(self, field):
        ret = ""
        if not is_primitive(field.type):
            ret += f"""
            byte[] ___{field.name} = _{field.name}.Serialize();
            """
        elif field.type == "bytearray":
            ret += f"""byte[] ___{field.name} = _{field.name};
            """
        else:
            ret +=f"""
            byte[] ___{field.name} = BitConverter.GetBytes(_{field.name});
            """
        ret += f"""Array.Copy(___{field.name}, 0, data, {field.name.upper()}_OFFSET, {self.communication_definitions["PACKET_SIZES"][field.type.upper()]});"""
        return ret
    
    def get_serializer(self, field):
        return f"""
            {self.get_serializer2(field)}"""
    
    def get_deserializer2(self, field):
        if not is_primitive(field.type):
            return f"""
            byte[] __{field.name} = new byte[{self.communication_definitions["PACKET_SIZES"][field.type.upper()]}];
            Array.Copy(data, {field.name.upper()}_OFFSET, __{field.name}, 0, {self.communication_definitions["PACKET_SIZES"][field.type.upper()]});
            _{field.name}.Deserialize(__{field.name});"""
        elif field.type == "uint8":
            return f"_{field.name} = data[{field.name.upper()}_OFFSET];"
        elif field.type == "int8":
            return f"_{field.name} = (sbyte)data[{field.name.upper()}_OFFSET];"
        elif field.type == "bytearray":
            return f"""_{field.name} = new byte[{self.communication_definitions["PACKET_SIZES"][field.type.upper()]}];
                    Array.Copy(data, {field.name.upper()}_OFFSET, _{field.name}, 0, _{field.name}.Length);
                    """
        return f"""_{field.name} = BitConverter.To{BitConverterMap.get(get_type(field.type, "csharp"), get_type(field.type, "csharp"))}(data, {field.name.upper()}_OFFSET);"""

    def get_deserializer(self, field):
        return f"""
        {self.get_deserializer2(field)}"""


class CSharpFieldAccessorWriter:
    def __init__(self, message):
        self.message = message
    
    def accessor_type(self, field):
        if field.accessor:
            if field.accessor.type == "float":
                return "double"
        if is_primitive(field.type):
            return get_type(field.type, "csharp")
        return field.type
    
    def get_getter2(self, field):
        if field.accessor.type == "bit":
            return f"return _{field.bit_array.name}.GetBit({field.idx});"
        if field.accessor.type == "float":
            return f"return (double)(_{field.name} / {field.accessor.scale});"
        return f"return _{field.name};"
    
    def get_getter(self, field):
        if field.accessor.type == "bits":
            ret = ""
            for bit in field.accessor.bits:
                ret += self.get_getter(bit)
            return ret
        
        return f"""public {self.accessor_type(field)} get_{field.name}(){{
                {self.get_getter2(field)}
            }}\n"""
    
    def get_setter2(self, field):
        if field.accessor.type == "bit":
            return f"_{field.bit_array.name}.SetBit({field.idx}, other);"
        if field.accessor.type == "float":
            return f'_{field.name} = ({get_type(field.type, "csharp")})(other * {field.accessor.scale});'
        return f"_{field.name} = other;"
        
    def get_setter(self, field):
        if field.accessor.type == "bits":
            ret = ""
            for bit in field.accessor.bits:
                ret += self.get_setter(bit)
            return ret
        
        return f"""public void set_{field.name}({self.accessor_type(field)} other){{
                {self.get_setter2(field)}
            }}\n"""

class CSharpMessageWriter:
    def __init__(self, templates_dir, src_dir, message, communication_definitions):
        self.templates_dir = templates_dir
        self.src_dir = src_dir
        self.message = message
        self.communication_definitions = communication_definitions
    
    def get_requirements(self, interface = False):
        return "using comm;"
    
    def get_accessors(self):
        ret = ""
        writer = CSharpFieldAccessorWriter(self.message)
        for field in self.message.fields:
            ret += writer.get_getter(field)
        ret += "\n"
        for field in self.message.fields:
            ret += writer.get_setter(field)
        return ret
    
    def get_serializer(self):
        ret = f"""public override byte[] Serialize() {{
                     byte[] data = new byte[{self.communication_definitions["PACKET_SIZES"][self.message.name.upper()]}];
                     """
        writer = CSharpFieldSerializerWriter(self.message, self.communication_definitions)
        for field in self.message.fields:
            ret += writer.get_serializer(field)
        ret += f"""
        return data;
        }}
        """
        return ret
    
    def get_deserializer(self):
        ret = f"""public override void Deserialize(byte[] data)  {{"""
        writer = CSharpFieldSerializerWriter(self.message, self.communication_definitions)
        for field in self.message.fields:
            ret += writer.get_deserializer(field)
        ret += f"""}}
        """
        return ret
    
    def get_variables(self):
        ret = ""
        for field in self.message.fields:
            ret += f'protected {get_type(field.type, "csharp")} _{field.name};\n'
        return ret
    
    def get_offsets(self):
        ret = ""
        offset = 0
        for field in self.message.fields:
            ret += f'protected int {field.name.upper()}_OFFSET = {offset};\n'
            offset += self.communication_definitions["PACKET_SIZES"][field.type.upper()]
        return ret
    
    def get_type(self):
        if self.message.name.upper() in self.communication_definitions["TYPES"].keys():
            return f"CommunicationDefinitions.TYPE type(){{ return CommunicationDefinitions.TYPE.{self.message.name.upper()}; }}"
        return ""

    def write(self):
        template = open(os.path.join(self.templates_dir, "Packet.Interface.Template.txt")).read()
        
        template = template.replace("[[InterfaceType]]", self.message.name + "Interface")
        template = template.replace("[[Requirements]]", self.get_requirements())
        template = template.replace("[[Variables]]", self.get_variables())
        template = template.replace("[[Offsets]]", self.get_offsets())

        template = template.replace("[[Type]]", self.get_type())
        open(os.path.join(self.src_dir, self.message.name + "Interface" + ".cs"), "w").write(template)

        
        template = open(os.path.join(self.templates_dir, "Packet.Template.txt")).read()
        template = template.replace("[[InterfaceType]]", self.message.name + "Interface")
        template = template.replace("[[MessageType]]", self.message.name)
        template = template.replace("[[Requirements]]",self.get_requirements(True))
        template = template.replace("[[Accessors]]", self.get_accessors())

        template = template.replace("[[Serializers]]", self.get_serializer() + self.get_deserializer())

        open(os.path.join(self.src_dir, self.message.name + ".cs"), "w").write(template)
        


class CSharpCommunicationDefinitionsWriter:
    def __init__(self, templates_dir, src_dir, communication_definitions):
        self.templates_dir = templates_dir
        self.src_dir = src_dir
        self.communication_definitions = communication_definitions

    
    def get_enum_header2(self, enum):
        ret = ""
        for key, value in enum.items():
            ret += f"{key} = {value},\n"

        return ret

    def get_enum_header(self, enum, name):
        ret = f"""public enum {name} : byte
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
                ret += f"{{TYPE.{key}, {value}}},\n"

        return ret

    def get_map_source(self, map, name):
        return f"""
        public static Dictionary<TYPE, int> PACKET_SIZES = new Dictionary<TYPE, int>(){{
            {self.get_map_source2(map)}
        }};
                """
    
    def write(self):
        template = open(os.path.join(self.templates_dir, "CommunicationDefinitions.Template.txt")).read()
        template = template.replace("[[ENUMS]]", self.get_enum_header(self.communication_definitions["TYPES"], "TYPE") + "\n" + self.get_enum_header(self.communication_definitions["IDENTIFIERS"], "IDENTIFIER"))
        template = template.replace("[[MAPS]]", self.get_map_source(self.communication_definitions["PACKET_SIZES"], "PACKET_SIZES"))
        open(os.path.join(self.src_dir, "CommunicationDefinitions.cs"), "w").write(template)


class CSharpWriter:
    def __init__(self, csharp_dir):
        self.src_dir = os.path.join(csharp_dir, "libcomm/autogenerated/")
        self.templates_dir = os.path.join(csharp_dir, "libcomm/templates")

    def run(self, messages, communication_definitions):
        for message in messages:
            CSharpMessageWriter(self.templates_dir, self.src_dir, message, communication_definitions).write()
        
        CSharpCommunicationDefinitionsWriter(self.templates_dir, self.src_dir, communication_definitions).write()
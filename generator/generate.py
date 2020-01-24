"""
Generate communication files from xml (WIP)
"""

import xml.etree.ElementTree as ET

TYPE_MAP = {
    "uint8": {
        "cpp": "uint8_t",
        "csharp": "byte"
    },
    "int8": {
        "cpp": "int8_t",
        "csharp": "sbyte"
    },
    "int16": {
        "cpp": "int16_t",
        "csharp": "Int16"
    },
    "uint16": {
        "cpp": "uint16_t",
        "csharp": "UInt16"
    },
    "int32": {
        "cpp": "int32_t",
        "csharp": "Int32"
    },
    "uint32": {
        "cpp": "uint32_t",
        "csharp": "UInt32"
    }
}

class CSharpWriter:
    def __init__(self):
        self.directory = "../csharp/"

    def write_interface(self, message):
        pass
        """
        template = None
        with open(self.directory + 'Interface/MessageTemplate.txt', 'r') as file:
            template = file.read()
        
        template = template.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
        template = template.format(MessageType=self.name, Variables=self.generate_variables_string('public', "csharp"), Offsets=self.generate_offsets_string('public static int') )

        
        with open(self.directory + '{MessageType}.cs'.format(MessageType=self.name), 'w') as file:
            file.write(template)
        """
    
    def write_implementation(self, message):
        pass

class CppWriter:
    def __init__(self):
        self.directory = "../cpp/"
    
    def generate_requirements(self, message):
        s = set()
        for field in message.fields:
            if(TYPE_MAP.get(field.type, None) == None):
                s.add(field.type)
        
        req = ""
        for t in s:
            req += '#include "Implementation/{Type}.h"\n'.format(Type=t)
        return req
    
    def write_interface(self, message):
        template = None
        size = PACKET_SIZES[message.name]
        with open(self.directory + 'include/Interfaces/Template.txt', 'r') as file:
            template = file.read()
            template = template.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
            template = template.format(Requirements=self.generate_requirements(message), InterfaceType=message.name + "Interface", Variables=message.generate_variables_string('', "cpp"), Offsets=message.generate_offsets_string('const int', "cpp"), Size = size )

        
        with open(self.directory + 'include/Interfaces/{InterfaceType}.h'.format(InterfaceType=message.name), 'w') as file:
            file.write(template)
    
    def write_implementation(self, message):
        data = None
        
        with open(self.directory + 'include/Implementation/Template.txt', 'r') as file:
            data = file.read()
            data = data.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
            data = data.format(Requirements=message.generate_interface(), MessageType=message.name, InterfaceType = message.name + "Interface", Accessors=message.generate_accessors_string('', "cpp"),
            Serializers=message.generate_ser_deser('cpp') )

        
        with open(self.directory + 'include/Implementation/{MessageType}.h'.format(MessageType=message.name), 'w') as file:
            file.write(data)

class Field:
    def __init__(self):
        self.name = ""
        self.type = ""
        self.offset = 0
        self.accessor = None
           
    
    def to_declaration(self, var, language):
        t = TYPE_MAP.get(self.type, None)
        if(t == None):
            t = self.type
        # Primative type that must be converted to language specific
        else:
            t = t[language]
        
        return "{var} {Type} {Name};".format(var=var, Type=t, Name=self.name)
    
    def to_accessor(self, var, language):
        t = TYPE_MAP.get(self.type, None)
        if(t == None):
            t = self.type
        else:
            t = t[language]
        
        if(self.accessor != None):
            return "{var} {Type} {Name}(){{ return _{Name}*{Scale}; }}\n".format(var=var, Type=self.accessor.get("type"), Name=self.name, Scale=self.accessor.get("scale"))
        else:
           return "{var} {Type} {Name}(){{ return _{Name}; }}\n".format(var=var, Type=t, Name=self.name)
    
    def to_offset(self, var, language):
        return "{var} {Name}_OFFSET = {Offset};\n".format(var=var, Name=self.name.upper().replace(" ", "_"), Offset=self.offset)
    
    def to_serializer(self, language):
        size = PACKET_SIZES[self.type]
        t = TYPE_MAP.get(self.type, None)

        custom_type = False
        
        if(t == None):
            t = self.type
            custom_type = True
        else:
            t = t[language]
        if(language == "cpp"):
            f = ""
            if (custom_type):
                f = """
                std::vector<uint8_t> {Name}_data = {Name}.Serialize();
                std::copy({Name}_data.begin(), {Name}_data.begin() + {Size}, data.begin() + {NameOffset}_OFFSET);
                """
            else:
                f = """
                std::copy((uint8_t*)&{Name}, (uint8_t*)&{Name} + {Size}, data.begin() + {NameOffset}_OFFSET);
                """
            f = f.format(Type=t, Name=self.name, Size=size, NameOffset = self.name.upper().replace(" ", "_"))
            return f
        if(language == "csharp"):
            return "csharpserializer"
        
        raise("to_serializer() error: invalid language")
    
    def to_deserializer(self, language):
        size = PACKET_SIZES[self.type]
        t = TYPE_MAP.get(self.type, None)

        custom_type = False
        if(t == None):
            t = self.type
            custom_type = True
        else:
            t = t[language]
        if(language == "cpp"):
            f = ""
            if (custom_type):
                f = """
                std::vector<uint8_t> {Name}_data(data.begin() + {NameOffset}_OFFSET, data.begin() + {NameOffset}_OFFSET + {Size});
                {Name}.Deserialize({Name}_data);
                """
            else:
                f = """
                std::copy(data.begin() + {NameOffset}_OFFSET, data.begin() + {NameOffset}_OFFSET + {Size}, (uint8_t *)&{Name});
                """
            f = f.format(Type=t, Name=self.name, Size=size, NameOffset = self.name.upper().replace(" ", "_"))
            return f
class Message:
    def __init__(self, name, fields):
        self.name = name
        self.fields = fields
        self.get_offsets()
    
    # Generate Packet Offsets for Message
    def get_offsets(self):
        off = 1

        for field in self.fields:
            field.offset = off
            off = off + PACKET_SIZES[field.type]
    
    def generate_interface(self):
        return '#include "Interfaces/{Type}.h"\n'.format(Type=self.name)
    
    def generate_variables_string(self, var, language):
        s = ''
        for field in self.fields:
            s += field.to_declaration(var, language) + "\n"
        return s
    
    def generate_accessors_string(self, var, language):
        s = ''
        for field in self.fields:
            s += field.to_accessor(var, language) + "\n"
        return s

    def generate_offsets_string(self, var, language):
        s = ''
        for field in self.fields:
            s += field.to_offset(var, language) + "\n"
        return s

    def generate_serializers(self, language):
        s = ""

        for field in self.fields:
            s += field.to_serializer(language) + "\n"

        return s
    
    def generate_deserializers(self, language):
        s = ""

        for field in self.fields:
            s += field.to_deserializer(language) + "\n"

        return s
        
    def generate_ser_deser(self, language):
        s = ""

        s += """
        std::vector<uint8_t> Serialize() {{
            std::vector<uint8_t> data({Size});
            {Serialize}

            return data;
        }}

        void Deserialize(std::vector<uint8_t> data) {{
           {Deserialize} 
        }}
        """.format(Size = PACKET_SIZES[self.name], Serialize=self.generate_serializers(language), Deserialize=self.generate_deserializers(language))
        
        return s

PACKET_SIZES = {}

def main():
    et = ET.parse('../comms.xml')
    root = et.getroot()

    packet_sizes = root.find('maps').find('.//*[@name="PACKET_SIZES"]')
    packet_sizes = packet_sizes.findall('pair')

    for size in packet_sizes:
        PACKET_SIZES[size.get('key')] = int(size.get('value'))
    
    messages = root.find('messages').findall('message')

    # Generate c++ header for all types
    with open('../cpp/include/Types.hpp', 'w') as file:
        file.write("#pragma once\n")
        file.write('#include <stdint.h>\n')
        file.write('#include <vector>\n')
        file.write('#include "Primitives/{}.h"\n'.format("RestPacket"))

        file.write('#include "CommunicationDefinitions.h"\n')

        for message in messages:
            file.write('#include "Interfaces/{}.h"\n'.format(message.get('name')))
            #file.write('#include "Implementation/{}.h"\n'.format(message.get('name')))

    for message in messages:
        name = message.get('name')

        fields = []

        for field in message.findall('field'):
            f = Field()
            f.name = field.get('name')
            f.type = field.get('type')
            f.accessor = field.find('accessor')

            fields.append(f)
        
        m = Message(name, fields)
        CppWriter().write_interface(m)
        CppWriter().write_implementation(m)

        CSharpWriter().write_interface(m)
        CSharpWriter().write_implementation(m)
        



main()
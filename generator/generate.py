"""
Generate communication files from xml (WIP)
"""

import xml.etree.ElementTree as ET

PACKET_SIZES = {
    'BitArray8': 1,
    'int8': 1,
    'uint8': 1,
    'int16': 2,
    'TagPosition': 12,
    'Obstacle': 16,
    'MotorInfo': 16
}

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
        "cpp": "short",
        "csharp": "short"
    }
}

class Field:
    def __init__(self):
        self.name = ""
        self.type = ""
        self.offset = 0

class Message:
    def __init__(self, name, fields):
        self.name = name
        self.fields = fields
        self.get_offsets()
    
    def get_offsets(self):
        off = 1

        for field in self.fields:
            field.offset = off
            off = off + PACKET_SIZES[field.type]
    
    def generate_variables_string(self, var, language):
        s = ''
        for field in self.fields:
            t = TYPE_MAP.get(field.type, None)
            if(t == None):
                t = field.type
            else:
                t = t[language]

            s = s + "{var} {Type} {Name};\n".format(var=var, Type=t, Name='_' + field.name)
        return s
    
    def generate_accessors_string(self, var, language):
        s = ''
        for field in self.fields:
            t = TYPE_MAP.get(field.type, None)
            if(t == None):
                t = field.type
            else:
                t = t[language]
            
            if(field.accessor != None):
                s = s + "{var} {Type} {Name}(){{ return _{Name}*{Scale}; }}\n".format(var=var, Type=field.accessor.get("type"), Name=field.name, Scale=field.accessor.get("scale"))
            else:
                s = s + "{var} {Type} {Name}(){{ return _{Name}; }}\n".format(var=var, Type=t, Name=field.name)
        return s

    def generate_offsets_string(self, var):
        s = ''
        for field in self.fields:
            s = s + "{var} {Type}_OFFSET = {Offset};\n".format(var=var, Type=field.name.upper().replace(" ", "_"), Offset=field.offset)
        return s

    def write_csharp(self):
        data = None
        with open('../test_c#/MessageTemplate.txt', 'r') as file:
            data = file.read()
            data = data.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
            data = data.format(MessageType=self.name, Variables=self.generate_variables_string('public', "csharp"), Offsets=self.generate_offsets_string('public static int') )

        
        with open('../test_c#/{MessageType}.cs'.format(MessageType=self.name), 'w') as file:
            file.write(data)

    def write_cpp_interface(self):
        data = None
        with open('../test_cpp/Interfaces/Template.txt', 'r') as file:
            data = file.read()
            data = data.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
            data = data.format(InterfaceType=self.name + "Interface", Variables=self.generate_variables_string('', "cpp"), Offsets=self.generate_offsets_string('const int') )

        
        with open('../test_cpp/Interfaces/{InterfaceType}.h'.format(InterfaceType=self.name), 'w') as file:
            file.write(data)

    def write_cpp_implementation(self):
        data = None
        with open('../test_cpp/Implementation/Template.txt', 'r') as file:
            data = file.read()
            data = data.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
            data = data.format(MessageType=self.name, InterfaceType = self.name + "Interface", Accessors=self.generate_accessors_string('', "cpp") )

        
        with open('../test_cpp/Implementation/{MessageType}.h'.format(MessageType=self.name), 'w') as file:
            file.write(data)
    
    def generate_serialize_cpp(self):
        s = ""

        for field in fields:
            s += ""

        return s
        
    def generate_serializers_cpp(self):
        s = ""

        s += """
        void Serialize() {
            std::array<char*, {{Size}}> data;
            {{Serialize}} 
        }

        void Deserialize(char*) {
           {{Deserialize}} 
        }
        """.format(Size = PACKET_SIZES[self.type], Serialize=generate_serialize_cpp(), Deserialize=generate_deserialize_cpp())


def main():
    et = ET.parse('../comms.xml')
    root = et.getroot()
    messages = root.find('messages').findall('message')

    with open('../test_cpp/Types.hpp', 'w') as file:
        file.write("#pragma once\n")
        for message in messages:
            file.write('#include "Interfaces/{}.h"\n'.format(message.get('name')))

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
        m.write_csharp()
        m.write_cpp_interface()
        m.write_cpp_implementation()
        



main()
"""
Generate communication files from xml (WIP)
"""

import xml.etree.ElementTree as ET

PACKET_SIZES = {
    'BitArray8': 1,
    'byte': 1,
    'short': 2,
    'TagPosition': 12,
    'Obstacle': 16,
    'MotorInfo': 16
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
    
    def generate_variables_string(self, var):
        s = ''
        for field in self.fields:
            s = s + "{var} {Type} {Name};\n".format(var=var, Type=field.type, Name='_' + field.name)
        return s

    def generate_offsets_string(self, var):
        s = ''
        for field in self.fields:
            s = s + "{var} {Type}_OFFSET = {Offset};\n".format(var=var, Type=field.name.upper().replace(" ", "_"), Offset=field.offset)
        return s

    def write_csharp(self):
        data = None
        with open('../test_c#/MessageTemplate.cs', 'r') as file:
            data = file.read()
            data = data.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
            data = data.format(MessageType=self.name, Variables=self.generate_variables_string('public'), Offsets=self.generate_offsets_string('public static int') )

        
        with open('../test_c#/{MessageType}.cs'.format(MessageType=self.name), 'w') as file:
            file.write(data)

    def write_cpp(self):
        data = None
        with open('../test_cpp/MessageTemplate.h', 'r') as file:
            data = file.read()
            data = data.replace("{", "{{").replace("}", "}}").replace("[[", "{").replace("]]", "}")
            
            data = data.format(MessageType=self.name, Variables=self.generate_variables_string(''), Offsets=self.generate_offsets_string('const int') )

        
        with open('../test_cpp/{MessageType}.h'.format(MessageType=self.name), 'w') as file:
            file.write(data)

def main():
    et = ET.parse('../comms.xml')
    root = et.getroot()
    messages = root.find('messages').findall('message')

    for message in messages:
        name = message.get('name')

        fields = []

        for field in message.findall('field'):
            f = Field()
            f.name = field.get('name')
            f.type = field.get('type')

            fields.append(f)
        
        m = Message(name, fields)
        m.write_csharp()
        m.write_cpp()
        



main()
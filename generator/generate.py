"""
Generate communication files from xml (WIP)
"""

import xmltodict
import json
import os

from CPPWriter import CPPWriter
from CSharpWriter import CSharpWriter

from helpers import *

class Bit:
    def __init__(self, bit_data, bit_array, idx):
        self.name = bit_data
        self.type = "bool"
        self.bit_array = bit_array
        self.accessor = Accessor(self, {
            "@type": "bit"
        })
        self.idx = idx

class Accessor:
    def __init__(self, field, accessor_data):
        self.field = field
        if accessor_data is not None:
            self.type = accessor_data["@type"]
        else:
            self.type = None
        
        if self.type == "float":
            self.scale = accessor_data["@scale"]
        
        if self.type == "bits":
            self.bits = []
            for idx, bit_data in enumerate(accessor_data["bit"]):
                self.bits.append(Bit(bit_data, field, idx))

class Field:
    def __init__(self, field_data):
        self.type = field_data["@type"]
        self.name = field_data["@name"]
        self.accessor = Accessor(self, field_data.get("accessor", None))
        self.size = field_data.get("@size", None)

        if self.size is not None:
            self.size = int(self.size)


class Message:
    def __init__(self, message_data):
        self.name = message_data["@name"]
        self.fields = [Field(field) for field in get_list(message_data.get("field", []))]


def get_map_dict(map_data):
    pairs = get_list(map_data["pair"])
    ret = {}
    for pair in pairs:
        ret[pair["@key"]] = int(pair["@value"])
    return ret
    
def get_enum_dict(map_data):
    elements = get_list(map_data["element"])
    ret = {}
    for element in elements:
        ret[element["@name"]] = int(element["@value"])
    return ret    


class CommunicationDefinitions:
    def __init__(self, PACKET_SIZES, TYPES, IDENTIFIERS, VISION_COMMAND):
        self.PACKET_SIZES = PACKET_SIZES
        self.TYPES = TYPES
        self.IDENTIFIERS = IDENTIFIERS
        self.VISION_COMMAND = VISION_COMMAND
        
    def get_field_size(self, field):
        if field.type == "bytearray":
            return field.size
        return self.PACKET_SIZES[field.type.upper()]

def main():
    data = open("./comms.xml").read()
    data = xmltodict.parse(data)["xml"]

    data = json.loads((json.dumps(data, indent=4)))

    data["map"] = get_list(data["map"])
    data["enum"] = get_list(data["enum"])

    messages = []

    comms = {
        "PACKET_SIZES": get_map_dict(data["map"][0]),
        "TYPES": get_enum_dict(data["enum"][0]),
        "IDENTIFIERS": get_enum_dict(data["enum"][1]),
        "VISION_COMMAND": get_enum_dict(data["enum"][2])
    }

    communication_definitions = CommunicationDefinitions(comms["PACKET_SIZES"], comms["TYPES"], comms["IDENTIFIERS"], comms["VISION_COMMAND"])

    for message in data["message"]:
        messages.append(Message(message))

    cpp_dir = os.path.join(os.path.dirname(__file__), "../cpp/")
    CPPWriter(cpp_dir).run(messages, communication_definitions)

    csharp_dir = os.path.join(os.path.dirname(__file__), "../csharp/")
    CSharpWriter(csharp_dir).run(messages, communication_definitions)


main()
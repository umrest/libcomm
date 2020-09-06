"""
Generate communication files from xml (WIP)
"""

import xmltodict
import json
import os

from CPPWriter import CPPWriter

from helpers import *

class Accessor:
    def __init__(self, field, accessor_data):
        self.field = field
        if accessor_data is not None:
            self.type = accessor_data["@type"]
        else:
            self.type = None

class Field:
    def __init__(self, field_data):
        self.type = field_data["@type"]
        self.accessor = Accessor(self, field_data.get("accessor", None))


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


def main():
    data = open("./comms.xml").read()
    data = xmltodict.parse(data)["xml"]

    data = json.loads((json.dumps(data, indent=4)))

    data["map"] = get_list(data["map"])
    data["enum"] = get_list(data["enum"])

    messages = []

    communication_definitions = {
        "PACKET_SIZES": get_map_dict(data["map"][0]),
        "TYPES": get_enum_dict(data["enum"][0]),
        "IDENTIFIERS": get_enum_dict(data["enum"][1]),
        "VISION_COMMAND": get_enum_dict(data["enum"][2])
    }

    print(communication_definitions)

    for message in data["message"]:
        messages.append(Message(message))

    cpp_dir = os.path.join(os.path.dirname(__file__), "../cpp/")
    CPPWriter(cpp_dir).run(messages, communication_definitions)

    #csharp_dir = os.path.join(os.path.dirname(__file__), "../csharp/")
    #CSharpWriter(csharp_dir).run(messages, communication_definitions)


main()
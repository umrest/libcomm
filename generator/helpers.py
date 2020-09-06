
def get_list(list_maybe):
    if type(list_maybe) is list:
        return list_maybe
    if list_maybe is None:
        return []
    return [list_maybe]

PRIMITIVE_TYPE_MAP = {
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
    },
    "uint64": {
        "cpp": "uint64_t",
        "csharp": "Int64"
    },
    "int64": {
        "cpp": "int64_t",
        "csharp": "Int64"
    },
    
    "bytearray": {
        "cpp": "char*",
        "csharp": "byte[]"
    }
}


def is_primitive(t):
    return PRIMITIVE_TYPE_MAP.get(t, None) != None


def get_type(t, t2):
    if is_primitive(t):
        return PRIMITIVE_TYPE_MAP[t][t2]
    return t
#pragma once

// Requirements
#include "comm/Types.hpp"

namespace comm
{
class IdentifierInterface : public RestPacket{
    public :
        IdentifierInterface()
    {

    }
    // Variables
     uint8_t identifier;


    // Offsets
    const int IDENTIFIER_OFFSET = 1;


};
} // namespace comm
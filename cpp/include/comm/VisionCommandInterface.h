#pragma once

// Requirements
#include "comm/Types.hpp"

namespace comm
{
class VisionCommandInterface : public RestPacket{
    public :
        VisionCommandInterface()
    {

    }
    // Variables
     uint8_t command;


    // Offsets
    const int COMMAND_OFFSET = 1;


};
} // namespace comm

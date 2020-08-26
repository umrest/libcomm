#pragma once

// Requirements
#include "comm/Types.hpp"

namespace comm
{
class HardwareInterface : public RestPacket{
    public :
        HardwareInterface()
    {

    }
    // Variables
     uint8_t angle;


    // Offsets
    const int ANGLE_OFFSET = 0;


};
} // namespace comm

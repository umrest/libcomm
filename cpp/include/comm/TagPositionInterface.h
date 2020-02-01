#pragma once

// Requirements
#include "comm/Types.hpp"

namespace comm
{
class TagPositionInterface : public RestPacket{
    public :
        TagPositionInterface()
    {

    }
    // Variables
     int16_t yaw;
 int16_t pitch;
 int16_t roll;
 int16_t x;
 int16_t y;
 int16_t z;


    // Offsets
    const int YAW_OFFSET = 0;

const int PITCH_OFFSET = 2;

const int ROLL_OFFSET = 4;

const int X_OFFSET = 6;

const int Y_OFFSET = 8;

const int Z_OFFSET = 10;


};
} // namespace comm

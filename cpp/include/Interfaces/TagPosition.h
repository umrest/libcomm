#pragma once


#include "Types.hpp"

namespace comm
{
    class TagPositionInterface : RestPacket
    {
        public:
            TagPositionInterface() {

            }
            // Variables
             int16_t yaw;
 int16_t pitch;
 int16_t roll;
 int16_t x;
 int16_t y;
 int16_t z;


            // Offsets
            const int YAW_OFFSET = 1;

const int PITCH_OFFSET = 3;

const int ROLL_OFFSET = 5;

const int X_OFFSET = 7;

const int Y_OFFSET = 9;

const int Z_OFFSET = 11;


    };
} // namespace comm

#pragma once


#include "Types.hpp"

namespace comm
{
    class FieldPositionInterface : RestPacket
    {
        public:
            FieldPositionInterface() {

            }
            // Variables
             int16_t yaw;
 int16_t x;
 int16_t y;


            // Offsets
            const int YAW_OFFSET = 1;

const int X_OFFSET = 3;

const int Y_OFFSET = 5;


    };
} // namespace comm

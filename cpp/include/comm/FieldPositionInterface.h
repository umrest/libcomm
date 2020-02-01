#pragma once


#include "comm/Types.hpp"

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
            const int YAW_OFFSET = 0;

const int X_OFFSET = 2;

const int Y_OFFSET = 4;


    };
} // namespace comm

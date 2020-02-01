#pragma once


#include "comm/Types.hpp"

namespace comm
{
    class ObstacleInterface : RestPacket
    {
        public:
            ObstacleInterface() {

            }
            // Variables
             int16_t x;
 int16_t y;
 int16_t width;
 int16_t height;


            // Offsets
            const int X_OFFSET = 0;

const int Y_OFFSET = 2;

const int WIDTH_OFFSET = 4;

const int HEIGHT_OFFSET = 6;


    };
} // namespace comm

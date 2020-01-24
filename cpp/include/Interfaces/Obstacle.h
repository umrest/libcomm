#pragma once


#include "Types.hpp"

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
            const int X_OFFSET = 1;

const int Y_OFFSET = 3;

const int WIDTH_OFFSET = 5;

const int HEIGHT_OFFSET = 7;


    };
} // namespace comm

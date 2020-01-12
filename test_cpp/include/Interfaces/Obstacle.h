#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class ObstacleInterface
    {
        public:
            ObstacleInterface() {

            }
            virtual std::array<char*, 16> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             int16_t _x;
 int16_t _y;
 int16_t _width;
 int16_t _height;


        protected :
            // Offsets
            const int X_OFFSET = 1;

const int Y_OFFSET = 3;

const int WIDTH_OFFSET = 5;

const int HEIGHT_OFFSET = 7;


    };
} // namespace comm

#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class TagPositionInterface
    {
        public:
            TagPositionInterface() {

            }
            virtual std::array<char*, 12> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             int16_t _yaw;
 int16_t _pitch;
 int16_t _roll;
 int16_t _x;
 int16_t _y;
 int16_t _z;


        protected :
            // Offsets
            const int YAW_OFFSET = 1;

const int PITCH_OFFSET = 3;

const int ROLL_OFFSET = 5;

const int X_OFFSET = 7;

const int Y_OFFSET = 9;

const int Z_OFFSET = 11;


    };
} // namespace comm

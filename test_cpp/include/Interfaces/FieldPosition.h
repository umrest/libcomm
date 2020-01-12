#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class FieldPositionInterface
    {
        public:
            FieldPositionInterface() {

            }
            virtual std::array<char*, 12> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             int16_t _yaw;
 int16_t _x;
 int16_t _y;


        protected :
            // Offsets
            const int YAW_OFFSET = 1;

const int X_OFFSET = 3;

const int Y_OFFSET = 5;


    };
} // namespace comm

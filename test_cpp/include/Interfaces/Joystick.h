#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class JoystickInterface
    {
        public:
            JoystickInterface() {

            }
            virtual std::array<char*, 127> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             BitArray8 _buttons_1;
 BitArray8 _buttons_2;
 int8_t _lj_x;
 int8_t _lj_y;
 int8_t _rj_x;
 int8_t _rj_y;
 int8_t _lt;
 int8_t _rt;


        protected :
            // Offsets
            const int BUTTONS_1_OFFSET = 1;

const int BUTTONS_2_OFFSET = 2;

const int LJ_X_OFFSET = 3;

const int LJ_Y_OFFSET = 4;

const int RJ_X_OFFSET = 5;

const int RJ_Y_OFFSET = 6;

const int LT_OFFSET = 7;

const int RT_OFFSET = 8;


    };
} // namespace comm

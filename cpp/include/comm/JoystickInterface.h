#pragma once

// Requirements
#include "comm/Types.hpp"

namespace comm
{
class JoystickInterface : public RestPacket{
    public :
        JoystickInterface()
    {

    }
    // Variables
     BitArray8 buttons_1;
 BitArray8 buttons_2;
 int8_t lj_x;
 int8_t lj_y;
 int8_t rj_x;
 int8_t rj_y;
 int8_t lt;
 int8_t rt;


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

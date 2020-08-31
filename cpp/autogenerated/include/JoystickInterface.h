#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Joystick.h"
#include "BitArray8.h"


namespace comm
{
class JoystickInterface : public RESTPacket{
    public :
        JoystickInterface()
    {

    }
    // Variables
    BitArray8 _buttons_1;BitArray8 _buttons_2;int8_t _lj_x;int8_t _lj_y;int8_t _rj_x;int8_t _rj_y;int8_t _lt;int8_t _rt;

    // Offsets
    int buttons_1_OFFSET = 0;
            int buttons_2_OFFSET = 1;
            int lj_x_OFFSET = 2;
            int lj_y_OFFSET = 3;
            int rj_x_OFFSET = 4;
            int rj_y_OFFSET = 5;
            int lt_OFFSET = 6;
            int rt_OFFSET = 7;
            int SIZE = 8;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::JOYSTICK; }
            
};
} // namespace comm

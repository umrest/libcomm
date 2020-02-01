#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Joystick : JoystickInterface
    {
        public:
            Joystick() {

            }

            // Accessors
             BitArray8 buttons_1(){ return _buttons_1 };
 BitArray8 buttons_2(){ return _buttons_2 };
 float lj_x(){ return _lj_x*1/127.0 };
 float lj_y(){ return _lj_y*1/127.0 };
 float rj_x(){ return _rj_x*1/127.0 };
 float rj_y(){ return _rj_y*1/127.0 };
 float lt(){ return _lt*1/127.0 };
 float rt(){ return _rt*1/127.0 };

    };
} // namespace comm

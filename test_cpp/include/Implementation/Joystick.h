#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Joystick : JoystickInterface
    {
        public:
            Joystick() {

            }
            
        std::array<char*, 127> Serialize() {
            std::array<char*, 127> data;
            
            BitArray8* buttons_1_ptr = &_buttons_1;
            std::copy(buttons_1_ptr, buttons_1_ptr + 1, data.begin() + BUTTONS_1_OFFSET);
            

            BitArray8* buttons_2_ptr = &_buttons_2;
            std::copy(buttons_2_ptr, buttons_2_ptr + 1, data.begin() + BUTTONS_2_OFFSET);
            

            int8_t* lj_x_ptr = &_lj_x;
            std::copy(lj_x_ptr, lj_x_ptr + 1, data.begin() + LJ_X_OFFSET);
            

            int8_t* lj_y_ptr = &_lj_y;
            std::copy(lj_y_ptr, lj_y_ptr + 1, data.begin() + LJ_Y_OFFSET);
            

            int8_t* rj_x_ptr = &_rj_x;
            std::copy(rj_x_ptr, rj_x_ptr + 1, data.begin() + RJ_X_OFFSET);
            

            int8_t* rj_y_ptr = &_rj_y;
            std::copy(rj_y_ptr, rj_y_ptr + 1, data.begin() + RJ_Y_OFFSET);
            

            int8_t* lt_ptr = &_lt;
            std::copy(lt_ptr, lt_ptr + 1, data.begin() + LT_OFFSET);
            

            int8_t* rt_ptr = &_rt;
            std::copy(rt_ptr, rt_ptr + 1, data.begin() + RT_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            BitArray8* buttons_1_ptr = &_buttons_1;
            std::copy(data + BUTTONS_1_OFFSET, data + BUTTONS_1_OFFSET + 1, buttons_1_ptr);
            

            BitArray8* buttons_2_ptr = &_buttons_2;
            std::copy(data + BUTTONS_2_OFFSET, data + BUTTONS_2_OFFSET + 1, buttons_2_ptr);
            

            int8_t* lj_x_ptr = &_lj_x;
            std::copy(data + LJ_X_OFFSET, data + LJ_X_OFFSET + 1, lj_x_ptr);
            

            int8_t* lj_y_ptr = &_lj_y;
            std::copy(data + LJ_Y_OFFSET, data + LJ_Y_OFFSET + 1, lj_y_ptr);
            

            int8_t* rj_x_ptr = &_rj_x;
            std::copy(data + RJ_X_OFFSET, data + RJ_X_OFFSET + 1, rj_x_ptr);
            

            int8_t* rj_y_ptr = &_rj_y;
            std::copy(data + RJ_Y_OFFSET, data + RJ_Y_OFFSET + 1, rj_y_ptr);
            

            int8_t* lt_ptr = &_lt;
            std::copy(data + LT_OFFSET, data + LT_OFFSET + 1, lt_ptr);
            

            int8_t* rt_ptr = &_rt;
            std::copy(data + RT_OFFSET, data + RT_OFFSET + 1, rt_ptr);
            
 
        }
        

            // Accessors
             BitArray8 buttons_1(){ return _buttons_1; }

 BitArray8 buttons_2(){ return _buttons_2; }

 float lj_x(){ return _lj_x*1/127.0; }

 float lj_y(){ return _lj_y*1/127.0; }

 float rj_x(){ return _rj_x*1/127.0; }

 float rj_y(){ return _rj_y*1/127.0; }

 float lt(){ return _lt*1/127.0; }

 float rt(){ return _rt*1/127.0; }


    };
} // namespace comm

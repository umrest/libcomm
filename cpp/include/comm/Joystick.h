#pragma once

#include "comm/JoystickInterface.h"


namespace comm
{
    class Joystick : public JoystickInterface
    {
        public:
            Joystick() {

            }
            // Accessors
             BitArray8 _buttons_1(){ return buttons_1; }

 BitArray8 _buttons_2(){ return buttons_2; }

 float _lj_x(){ return lj_x*1/127.0; }

 float _lj_y(){ return lj_y*1/127.0; }

 float _rj_x(){ return rj_x*1/127.0; }

 float _rj_y(){ return rj_y*1/127.0; }

 float _lt(){ return lt*1/127.0; }

 float _rt(){ return rt*1/127.0; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(9);
            
            data[0] = 1;
            
            
                std::vector<uint8_t> buttons_1_data = buttons_1.Serialize();
                std::copy(buttons_1_data.begin(), buttons_1_data.begin() + 1, data.begin() + BUTTONS_1_OFFSET);
                

                std::vector<uint8_t> buttons_2_data = buttons_2.Serialize();
                std::copy(buttons_2_data.begin(), buttons_2_data.begin() + 1, data.begin() + BUTTONS_2_OFFSET);
                

                int8_t lj_x_ = _lj_x();
                uint8_t* lj_x_data = (uint8_t*)&lj_x_;
                std::copy(lj_x_data, lj_x_data + 1, data.begin() + LJ_X_OFFSET);
                

                int8_t lj_y_ = _lj_y();
                uint8_t* lj_y_data = (uint8_t*)&lj_y_;
                std::copy(lj_y_data, lj_y_data + 1, data.begin() + LJ_Y_OFFSET);
                

                int8_t rj_x_ = _rj_x();
                uint8_t* rj_x_data = (uint8_t*)&rj_x_;
                std::copy(rj_x_data, rj_x_data + 1, data.begin() + RJ_X_OFFSET);
                

                int8_t rj_y_ = _rj_y();
                uint8_t* rj_y_data = (uint8_t*)&rj_y_;
                std::copy(rj_y_data, rj_y_data + 1, data.begin() + RJ_Y_OFFSET);
                

                int8_t lt_ = _lt();
                uint8_t* lt_data = (uint8_t*)&lt_;
                std::copy(lt_data, lt_data + 1, data.begin() + LT_OFFSET);
                

                int8_t rt_ = _rt();
                uint8_t* rt_data = (uint8_t*)&rt_;
                std::copy(rt_data, rt_data + 1, data.begin() + RT_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::vector<uint8_t> buttons_1_data(data.begin() + BUTTONS_1_OFFSET, data.begin() + BUTTONS_1_OFFSET + 1);
                buttons_1.Deserialize(buttons_1_data);
                

                std::vector<uint8_t> buttons_2_data(data.begin() + BUTTONS_2_OFFSET, data.begin() + BUTTONS_2_OFFSET + 1);
                buttons_2.Deserialize(buttons_2_data);
                

                std::copy(data.begin() + LJ_X_OFFSET, data.begin() + LJ_X_OFFSET + 1, (uint8_t *)&lj_x);
                

                std::copy(data.begin() + LJ_Y_OFFSET, data.begin() + LJ_Y_OFFSET + 1, (uint8_t *)&lj_y);
                

                std::copy(data.begin() + RJ_X_OFFSET, data.begin() + RJ_X_OFFSET + 1, (uint8_t *)&rj_x);
                

                std::copy(data.begin() + RJ_Y_OFFSET, data.begin() + RJ_Y_OFFSET + 1, (uint8_t *)&rj_y);
                

                std::copy(data.begin() + LT_OFFSET, data.begin() + LT_OFFSET + 1, (uint8_t *)&lt);
                

                std::copy(data.begin() + RT_OFFSET, data.begin() + RT_OFFSET + 1, (uint8_t *)&rt);
                
 
        }
        

            
            
    };
} // namespace comm

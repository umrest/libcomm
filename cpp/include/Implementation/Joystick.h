#pragma once

#include "Interfaces/Joystick.h"


namespace comm
{
    class Joystick : JoystickInterface
    {
        public:
            Joystick() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(127);
            
                std::vector<uint8_t> buttons_1_data = buttons_1.Serialize();
                std::copy(buttons_1_data.begin(), buttons_1_data.begin() + 1, data.begin() + BUTTONS_1_OFFSET);
                

                std::vector<uint8_t> buttons_2_data = buttons_2.Serialize();
                std::copy(buttons_2_data.begin(), buttons_2_data.begin() + 1, data.begin() + BUTTONS_2_OFFSET);
                

                std::copy((uint8_t*)&lj_x, (uint8_t*)&lj_x + 1, data.begin() + LJ_X_OFFSET);
                

                std::copy((uint8_t*)&lj_y, (uint8_t*)&lj_y + 1, data.begin() + LJ_Y_OFFSET);
                

                std::copy((uint8_t*)&rj_x, (uint8_t*)&rj_x + 1, data.begin() + RJ_X_OFFSET);
                

                std::copy((uint8_t*)&rj_y, (uint8_t*)&rj_y + 1, data.begin() + RJ_Y_OFFSET);
                

                std::copy((uint8_t*)&lt, (uint8_t*)&lt + 1, data.begin() + LT_OFFSET);
                

                std::copy((uint8_t*)&rt, (uint8_t*)&rt + 1, data.begin() + RT_OFFSET);
                


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
        

            // Accessors
            
    };
} // namespace comm

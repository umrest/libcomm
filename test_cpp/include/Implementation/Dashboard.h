#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Dashboard : DashboardInterface
    {
        public:
            Dashboard() {

            }
            
        std::array<char*, 127> Serialize() {
            std::array<char*, 127> data;
            
            uint8_t* enabled_1_ptr = &_enabled_1;
            std::copy(enabled_1_ptr, enabled_1_ptr + 1, data.begin() + ENABLED_1_OFFSET);
            

            uint8_t* enabled_2_ptr = &_enabled_2;
            std::copy(enabled_2_ptr, enabled_2_ptr + 1, data.begin() + ENABLED_2_OFFSET);
            

            uint8_t* enabled_3_ptr = &_enabled_3;
            std::copy(enabled_3_ptr, enabled_3_ptr + 1, data.begin() + ENABLED_3_OFFSET);
            

            uint8_t* enabled_4_ptr = &_enabled_4;
            std::copy(enabled_4_ptr, enabled_4_ptr + 1, data.begin() + ENABLED_4_OFFSET);
            

            uint8_t* enabled_5_ptr = &_enabled_5;
            std::copy(enabled_5_ptr, enabled_5_ptr + 1, data.begin() + ENABLED_5_OFFSET);
            

            uint8_t* enabled_6_ptr = &_enabled_6;
            std::copy(enabled_6_ptr, enabled_6_ptr + 1, data.begin() + ENABLED_6_OFFSET);
            

            uint8_t* enabled_7_ptr = &_enabled_7;
            std::copy(enabled_7_ptr, enabled_7_ptr + 1, data.begin() + ENABLED_7_OFFSET);
            

            uint8_t* enabled_8_ptr = &_enabled_8;
            std::copy(enabled_8_ptr, enabled_8_ptr + 1, data.begin() + ENABLED_8_OFFSET);
            

            uint8_t* state_ptr = &_state;
            std::copy(state_ptr, state_ptr + 1, data.begin() + STATE_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            uint8_t* enabled_1_ptr = &_enabled_1;
            std::copy(data + ENABLED_1_OFFSET, data + ENABLED_1_OFFSET + 1, enabled_1_ptr);
            

            uint8_t* enabled_2_ptr = &_enabled_2;
            std::copy(data + ENABLED_2_OFFSET, data + ENABLED_2_OFFSET + 1, enabled_2_ptr);
            

            uint8_t* enabled_3_ptr = &_enabled_3;
            std::copy(data + ENABLED_3_OFFSET, data + ENABLED_3_OFFSET + 1, enabled_3_ptr);
            

            uint8_t* enabled_4_ptr = &_enabled_4;
            std::copy(data + ENABLED_4_OFFSET, data + ENABLED_4_OFFSET + 1, enabled_4_ptr);
            

            uint8_t* enabled_5_ptr = &_enabled_5;
            std::copy(data + ENABLED_5_OFFSET, data + ENABLED_5_OFFSET + 1, enabled_5_ptr);
            

            uint8_t* enabled_6_ptr = &_enabled_6;
            std::copy(data + ENABLED_6_OFFSET, data + ENABLED_6_OFFSET + 1, enabled_6_ptr);
            

            uint8_t* enabled_7_ptr = &_enabled_7;
            std::copy(data + ENABLED_7_OFFSET, data + ENABLED_7_OFFSET + 1, enabled_7_ptr);
            

            uint8_t* enabled_8_ptr = &_enabled_8;
            std::copy(data + ENABLED_8_OFFSET, data + ENABLED_8_OFFSET + 1, enabled_8_ptr);
            

            uint8_t* state_ptr = &_state;
            std::copy(data + STATE_OFFSET, data + STATE_OFFSET + 1, state_ptr);
            
 
        }
        

            // Accessors
             uint8_t enabled_1(){ return _enabled_1; }

 uint8_t enabled_2(){ return _enabled_2; }

 uint8_t enabled_3(){ return _enabled_3; }

 uint8_t enabled_4(){ return _enabled_4; }

 uint8_t enabled_5(){ return _enabled_5; }

 uint8_t enabled_6(){ return _enabled_6; }

 uint8_t enabled_7(){ return _enabled_7; }

 uint8_t enabled_8(){ return _enabled_8; }

 uint8_t state(){ return _state; }


    };
} // namespace comm

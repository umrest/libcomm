#pragma once

#include "DashboardInterface.h"


namespace comm
{
    class Dashboard : public DashboardInterface
    {
        public:
            Dashboard() {

            }
            // Accessors
            
            uint8_t get_enabled_1(){
                return _enabled_1;
            }
            void set_enabled_1(uint8_t val){
                _enabled_1 = val;
            }
            
            uint8_t get_enabled_2(){
                return _enabled_2;
            }
            void set_enabled_2(uint8_t val){
                _enabled_2 = val;
            }
            
            uint8_t get_enabled_3(){
                return _enabled_3;
            }
            void set_enabled_3(uint8_t val){
                _enabled_3 = val;
            }
            
            uint8_t get_enabled_4(){
                return _enabled_4;
            }
            void set_enabled_4(uint8_t val){
                _enabled_4 = val;
            }
            
            uint8_t get_enabled_5(){
                return _enabled_5;
            }
            void set_enabled_5(uint8_t val){
                _enabled_5 = val;
            }
            
            uint8_t get_enabled_6(){
                return _enabled_6;
            }
            void set_enabled_6(uint8_t val){
                _enabled_6 = val;
            }
            
            uint8_t get_enabled_7(){
                return _enabled_7;
            }
            void set_enabled_7(uint8_t val){
                _enabled_7 = val;
            }
            
            uint8_t get_enabled_8(){
                return _enabled_8;
            }
            void set_enabled_8(uint8_t val){
                _enabled_8 = val;
            }
            
            uint8_t get_state(){
                return _state;
            }
            void set_state(uint8_t val){
                _state = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(9);
                     
            
            uint8_t* ___enabled_1 = (uint8_t*)&_enabled_1;
            
            std::copy(___enabled_1, ___enabled_1 + 1, data.begin() + enabled_1_OFFSET);
            
            
            uint8_t* ___enabled_2 = (uint8_t*)&_enabled_2;
            
            std::copy(___enabled_2, ___enabled_2 + 1, data.begin() + enabled_2_OFFSET);
            
            
            uint8_t* ___enabled_3 = (uint8_t*)&_enabled_3;
            
            std::copy(___enabled_3, ___enabled_3 + 1, data.begin() + enabled_3_OFFSET);
            
            
            uint8_t* ___enabled_4 = (uint8_t*)&_enabled_4;
            
            std::copy(___enabled_4, ___enabled_4 + 1, data.begin() + enabled_4_OFFSET);
            
            
            uint8_t* ___enabled_5 = (uint8_t*)&_enabled_5;
            
            std::copy(___enabled_5, ___enabled_5 + 1, data.begin() + enabled_5_OFFSET);
            
            
            uint8_t* ___enabled_6 = (uint8_t*)&_enabled_6;
            
            std::copy(___enabled_6, ___enabled_6 + 1, data.begin() + enabled_6_OFFSET);
            
            
            uint8_t* ___enabled_7 = (uint8_t*)&_enabled_7;
            
            std::copy(___enabled_7, ___enabled_7 + 1, data.begin() + enabled_7_OFFSET);
            
            
            uint8_t* ___enabled_8 = (uint8_t*)&_enabled_8;
            
            std::copy(___enabled_8, ___enabled_8 + 1, data.begin() + enabled_8_OFFSET);
            
            
            uint8_t* ___state = (uint8_t*)&_state;
            
            std::copy(___state, ___state + 1, data.begin() + state_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
                     
            
            std::copy(data.begin() + enabled_1_OFFSET, data.begin() + enabled_1_OFFSET + 1, (uint8_t *)&_enabled_1);
        
            
            std::copy(data.begin() + enabled_2_OFFSET, data.begin() + enabled_2_OFFSET + 1, (uint8_t *)&_enabled_2);
        
            
            std::copy(data.begin() + enabled_3_OFFSET, data.begin() + enabled_3_OFFSET + 1, (uint8_t *)&_enabled_3);
        
            
            std::copy(data.begin() + enabled_4_OFFSET, data.begin() + enabled_4_OFFSET + 1, (uint8_t *)&_enabled_4);
        
            
            std::copy(data.begin() + enabled_5_OFFSET, data.begin() + enabled_5_OFFSET + 1, (uint8_t *)&_enabled_5);
        
            
            std::copy(data.begin() + enabled_6_OFFSET, data.begin() + enabled_6_OFFSET + 1, (uint8_t *)&_enabled_6);
        
            
            std::copy(data.begin() + enabled_7_OFFSET, data.begin() + enabled_7_OFFSET + 1, (uint8_t *)&_enabled_7);
        
            
            std::copy(data.begin() + enabled_8_OFFSET, data.begin() + enabled_8_OFFSET + 1, (uint8_t *)&_enabled_8);
        
            
            std::copy(data.begin() + state_OFFSET, data.begin() + state_OFFSET + 1, (uint8_t *)&_state);
        
                     }
                

            
            
    };
} // namespace comm

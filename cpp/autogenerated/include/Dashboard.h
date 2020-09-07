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
uint8_t get_enabled_2(){
                return _enabled_2;
            }
uint8_t get_enabled_3(){
                return _enabled_3;
            }
uint8_t get_enabled_4(){
                return _enabled_4;
            }
uint8_t get_enabled_5(){
                return _enabled_5;
            }
uint8_t get_enabled_6(){
                return _enabled_6;
            }
uint8_t get_enabled_7(){
                return _enabled_7;
            }
uint8_t get_enabled_8(){
                return _enabled_8;
            }
uint8_t get_state(){
                return _state;
            }

void set_enabled_1(uint8_t other){
                _enabled_1 = other;
            };
void set_enabled_2(uint8_t other){
                _enabled_2 = other;
            };
void set_enabled_3(uint8_t other){
                _enabled_3 = other;
            };
void set_enabled_4(uint8_t other){
                _enabled_4 = other;
            };
void set_enabled_5(uint8_t other){
                _enabled_5 = other;
            };
void set_enabled_6(uint8_t other){
                _enabled_6 = other;
            };
void set_enabled_7(uint8_t other){
                _enabled_7 = other;
            };
void set_enabled_8(uint8_t other){
                _enabled_8 = other;
            };
void set_state(uint8_t other){
                _state = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(9);
                     
            uint8_t* __enabled_1 = (uint8_t*)&_enabled_1;

            std::copy(__enabled_1, __enabled_1 + 1, data.begin() + ENABLED_1_OFFSET);

            uint8_t* __enabled_2 = (uint8_t*)&_enabled_2;

            std::copy(__enabled_2, __enabled_2 + 1, data.begin() + ENABLED_2_OFFSET);

            uint8_t* __enabled_3 = (uint8_t*)&_enabled_3;

            std::copy(__enabled_3, __enabled_3 + 1, data.begin() + ENABLED_3_OFFSET);

            uint8_t* __enabled_4 = (uint8_t*)&_enabled_4;

            std::copy(__enabled_4, __enabled_4 + 1, data.begin() + ENABLED_4_OFFSET);

            uint8_t* __enabled_5 = (uint8_t*)&_enabled_5;

            std::copy(__enabled_5, __enabled_5 + 1, data.begin() + ENABLED_5_OFFSET);

            uint8_t* __enabled_6 = (uint8_t*)&_enabled_6;

            std::copy(__enabled_6, __enabled_6 + 1, data.begin() + ENABLED_6_OFFSET);

            uint8_t* __enabled_7 = (uint8_t*)&_enabled_7;

            std::copy(__enabled_7, __enabled_7 + 1, data.begin() + ENABLED_7_OFFSET);

            uint8_t* __enabled_8 = (uint8_t*)&_enabled_8;

            std::copy(__enabled_8, __enabled_8 + 1, data.begin() + ENABLED_8_OFFSET);

            uint8_t* __state = (uint8_t*)&_state;

            std::copy(__state, __state + 1, data.begin() + STATE_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + ENABLED_1_OFFSET, data.begin() + ENABLED_1_OFFSET + 1, (uint8_t *)&_enabled_1);
        std::copy(data.begin() + ENABLED_2_OFFSET, data.begin() + ENABLED_2_OFFSET + 1, (uint8_t *)&_enabled_2);
        std::copy(data.begin() + ENABLED_3_OFFSET, data.begin() + ENABLED_3_OFFSET + 1, (uint8_t *)&_enabled_3);
        std::copy(data.begin() + ENABLED_4_OFFSET, data.begin() + ENABLED_4_OFFSET + 1, (uint8_t *)&_enabled_4);
        std::copy(data.begin() + ENABLED_5_OFFSET, data.begin() + ENABLED_5_OFFSET + 1, (uint8_t *)&_enabled_5);
        std::copy(data.begin() + ENABLED_6_OFFSET, data.begin() + ENABLED_6_OFFSET + 1, (uint8_t *)&_enabled_6);
        std::copy(data.begin() + ENABLED_7_OFFSET, data.begin() + ENABLED_7_OFFSET + 1, (uint8_t *)&_enabled_7);
        std::copy(data.begin() + ENABLED_8_OFFSET, data.begin() + ENABLED_8_OFFSET + 1, (uint8_t *)&_enabled_8);
        std::copy(data.begin() + STATE_OFFSET, data.begin() + STATE_OFFSET + 1, (uint8_t *)&_state);}
        

            
            
    };
} // namespace comm

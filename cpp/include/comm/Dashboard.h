#pragma once

#include "comm/DashboardInterface.h"


namespace comm
{
    class Dashboard : public DashboardInterface
    {
        public:
            Dashboard() {

            }
            // Accessors
             uint8_t _enabled_1(){ return enabled_1; }

 uint8_t _enabled_2(){ return enabled_2; }

 uint8_t _enabled_3(){ return enabled_3; }

 uint8_t _enabled_4(){ return enabled_4; }

 uint8_t _enabled_5(){ return enabled_5; }

 uint8_t _enabled_6(){ return enabled_6; }

 uint8_t _enabled_7(){ return enabled_7; }

 uint8_t _enabled_8(){ return enabled_8; }

 uint8_t _state(){ return state; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(9);
            
            
                uint8_t enabled_1_ = _enabled_1();
                uint8_t* enabled_1_data = (uint8_t*)&enabled_1_;
                std::copy(enabled_1_data, enabled_1_data + 1, data.begin() + ENABLED_1_OFFSET);
                

                uint8_t enabled_2_ = _enabled_2();
                uint8_t* enabled_2_data = (uint8_t*)&enabled_2_;
                std::copy(enabled_2_data, enabled_2_data + 1, data.begin() + ENABLED_2_OFFSET);
                

                uint8_t enabled_3_ = _enabled_3();
                uint8_t* enabled_3_data = (uint8_t*)&enabled_3_;
                std::copy(enabled_3_data, enabled_3_data + 1, data.begin() + ENABLED_3_OFFSET);
                

                uint8_t enabled_4_ = _enabled_4();
                uint8_t* enabled_4_data = (uint8_t*)&enabled_4_;
                std::copy(enabled_4_data, enabled_4_data + 1, data.begin() + ENABLED_4_OFFSET);
                

                uint8_t enabled_5_ = _enabled_5();
                uint8_t* enabled_5_data = (uint8_t*)&enabled_5_;
                std::copy(enabled_5_data, enabled_5_data + 1, data.begin() + ENABLED_5_OFFSET);
                

                uint8_t enabled_6_ = _enabled_6();
                uint8_t* enabled_6_data = (uint8_t*)&enabled_6_;
                std::copy(enabled_6_data, enabled_6_data + 1, data.begin() + ENABLED_6_OFFSET);
                

                uint8_t enabled_7_ = _enabled_7();
                uint8_t* enabled_7_data = (uint8_t*)&enabled_7_;
                std::copy(enabled_7_data, enabled_7_data + 1, data.begin() + ENABLED_7_OFFSET);
                

                uint8_t enabled_8_ = _enabled_8();
                uint8_t* enabled_8_data = (uint8_t*)&enabled_8_;
                std::copy(enabled_8_data, enabled_8_data + 1, data.begin() + ENABLED_8_OFFSET);
                

                uint8_t state_ = _state();
                uint8_t* state_data = (uint8_t*)&state_;
                std::copy(state_data, state_data + 1, data.begin() + STATE_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + ENABLED_1_OFFSET, data.begin() + ENABLED_1_OFFSET + 1, (uint8_t *)&enabled_1);
                

                std::copy(data.begin() + ENABLED_2_OFFSET, data.begin() + ENABLED_2_OFFSET + 1, (uint8_t *)&enabled_2);
                

                std::copy(data.begin() + ENABLED_3_OFFSET, data.begin() + ENABLED_3_OFFSET + 1, (uint8_t *)&enabled_3);
                

                std::copy(data.begin() + ENABLED_4_OFFSET, data.begin() + ENABLED_4_OFFSET + 1, (uint8_t *)&enabled_4);
                

                std::copy(data.begin() + ENABLED_5_OFFSET, data.begin() + ENABLED_5_OFFSET + 1, (uint8_t *)&enabled_5);
                

                std::copy(data.begin() + ENABLED_6_OFFSET, data.begin() + ENABLED_6_OFFSET + 1, (uint8_t *)&enabled_6);
                

                std::copy(data.begin() + ENABLED_7_OFFSET, data.begin() + ENABLED_7_OFFSET + 1, (uint8_t *)&enabled_7);
                

                std::copy(data.begin() + ENABLED_8_OFFSET, data.begin() + ENABLED_8_OFFSET + 1, (uint8_t *)&enabled_8);
                

                std::copy(data.begin() + STATE_OFFSET, data.begin() + STATE_OFFSET + 1, (uint8_t *)&state);
                
 
        }
        

            
            
    };
} // namespace comm

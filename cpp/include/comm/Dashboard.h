#pragma once

#include "comm/DashboardInterface.h"


namespace comm
{
    class Dashboard : public DashboardInterface
    {
        public:
            Dashboard() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(127);
            
            
                std::copy((uint8_t*)&enabled_1, (uint8_t*)&enabled_1 + 1, data.begin() + ENABLED_1_OFFSET);
                

                std::copy((uint8_t*)&enabled_2, (uint8_t*)&enabled_2 + 1, data.begin() + ENABLED_2_OFFSET);
                

                std::copy((uint8_t*)&enabled_3, (uint8_t*)&enabled_3 + 1, data.begin() + ENABLED_3_OFFSET);
                

                std::copy((uint8_t*)&enabled_4, (uint8_t*)&enabled_4 + 1, data.begin() + ENABLED_4_OFFSET);
                

                std::copy((uint8_t*)&enabled_5, (uint8_t*)&enabled_5 + 1, data.begin() + ENABLED_5_OFFSET);
                

                std::copy((uint8_t*)&enabled_6, (uint8_t*)&enabled_6 + 1, data.begin() + ENABLED_6_OFFSET);
                

                std::copy((uint8_t*)&enabled_7, (uint8_t*)&enabled_7 + 1, data.begin() + ENABLED_7_OFFSET);
                

                std::copy((uint8_t*)&enabled_8, (uint8_t*)&enabled_8 + 1, data.begin() + ENABLED_8_OFFSET);
                

                std::copy((uint8_t*)&state, (uint8_t*)&state + 1, data.begin() + STATE_OFFSET);
                


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
        

            // Accessors
            
    };
} // namespace comm

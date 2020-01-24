#pragma once

#include "Interfaces/TagPosition.h"


namespace comm
{
    class TagPosition : TagPositionInterface
    {
        public:
            TagPosition() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(12);
            
                std::copy((uint8_t*)&yaw, (uint8_t*)&yaw + 2, data.begin() + YAW_OFFSET);
                

                std::copy((uint8_t*)&pitch, (uint8_t*)&pitch + 2, data.begin() + PITCH_OFFSET);
                

                std::copy((uint8_t*)&roll, (uint8_t*)&roll + 2, data.begin() + ROLL_OFFSET);
                

                std::copy((uint8_t*)&x, (uint8_t*)&x + 2, data.begin() + X_OFFSET);
                

                std::copy((uint8_t*)&y, (uint8_t*)&y + 2, data.begin() + Y_OFFSET);
                

                std::copy((uint8_t*)&z, (uint8_t*)&z + 2, data.begin() + Z_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + YAW_OFFSET, data.begin() + YAW_OFFSET + 2, (uint8_t *)&yaw);
                

                std::copy(data.begin() + PITCH_OFFSET, data.begin() + PITCH_OFFSET + 2, (uint8_t *)&pitch);
                

                std::copy(data.begin() + ROLL_OFFSET, data.begin() + ROLL_OFFSET + 2, (uint8_t *)&roll);
                

                std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&x);
                

                std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&y);
                

                std::copy(data.begin() + Z_OFFSET, data.begin() + Z_OFFSET + 2, (uint8_t *)&z);
                
 
        }
        

            // Accessors
            
    };
} // namespace comm

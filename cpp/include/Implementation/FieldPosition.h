#pragma once

#include "Interfaces/FieldPosition.h"


namespace comm
{
    class FieldPosition : FieldPositionInterface
    {
        public:
            FieldPosition() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(12);
            
                std::copy((uint8_t*)&yaw, (uint8_t*)&yaw + 2, data.begin() + YAW_OFFSET);
                

                std::copy((uint8_t*)&x, (uint8_t*)&x + 2, data.begin() + X_OFFSET);
                

                std::copy((uint8_t*)&y, (uint8_t*)&y + 2, data.begin() + Y_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + YAW_OFFSET, data.begin() + YAW_OFFSET + 2, (uint8_t *)&yaw);
                

                std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&x);
                

                std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&y);
                
 
        }
        

            // Accessors
            
    };
} // namespace comm

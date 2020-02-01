#pragma once

#include "comm/ObstacleInterface.h"


namespace comm
{
    class Obstacle : public ObstacleInterface
    {
        public:
            Obstacle() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(16);
            
            
                std::copy((uint8_t*)&x, (uint8_t*)&x + 2, data.begin() + X_OFFSET);
                

                std::copy((uint8_t*)&y, (uint8_t*)&y + 2, data.begin() + Y_OFFSET);
                

                std::copy((uint8_t*)&width, (uint8_t*)&width + 2, data.begin() + WIDTH_OFFSET);
                

                std::copy((uint8_t*)&height, (uint8_t*)&height + 2, data.begin() + HEIGHT_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&x);
                

                std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&y);
                

                std::copy(data.begin() + WIDTH_OFFSET, data.begin() + WIDTH_OFFSET + 2, (uint8_t *)&width);
                

                std::copy(data.begin() + HEIGHT_OFFSET, data.begin() + HEIGHT_OFFSET + 2, (uint8_t *)&height);
                
 
        }
        

            // Accessors
            
    };
} // namespace comm

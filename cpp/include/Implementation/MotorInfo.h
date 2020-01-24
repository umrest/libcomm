#pragma once

#include "Interfaces/MotorInfo.h"


namespace comm
{
    class MotorInfo : MotorInfoInterface
    {
        public:
            MotorInfo() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(16);
            

            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
            
        }
        

            // Accessors
            
    };
} // namespace comm

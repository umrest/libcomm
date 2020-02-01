#pragma once

#include "comm/MotorInfoInterface.h"


namespace comm
{
    class MotorInfo : public MotorInfoInterface
    {
        public:
            MotorInfo() {

            }
            // Accessors
            
            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(16);
            
            

            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
            
        }
        

            
            
    };
} // namespace comm

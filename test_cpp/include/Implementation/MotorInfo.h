#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class MotorInfo : MotorInfoInterface
    {
        public:
            MotorInfo() {

            }
            
        std::array<char*, 16> Serialize() {
            std::array<char*, 16> data;
            

            return data;
        }

        void Deserialize(char* data) {
            
        }
        

            // Accessors
            
    };
} // namespace comm

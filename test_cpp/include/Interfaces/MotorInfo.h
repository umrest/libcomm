#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class MotorInfoInterface
    {
        public:
            MotorInfoInterface() {

            }
            virtual std::array<char*, 16> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
            

        protected :
            // Offsets
            
    };
} // namespace comm

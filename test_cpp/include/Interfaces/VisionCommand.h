#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class VisionCommandInterface
    {
        public:
            VisionCommandInterface() {

            }
            virtual std::array<char*, 127> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             uint8_t _command;


        protected :
            // Offsets
            const int COMMAND_OFFSET = 1;


    };
} // namespace comm

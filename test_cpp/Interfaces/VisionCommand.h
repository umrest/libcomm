#pragma once

#include <stdint.h>
#include "Types.hpp"

namespace comm
{
    class VisionCommandInterface : RESTPacket
    {
        public:
            VisionCommandInterface() {

            }
            virtual void Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             uint8_t _command;


        protected :
            // Offsets
            const int COMMAND_OFFSET = 1;

    };
} // namespace comm

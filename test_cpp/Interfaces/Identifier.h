#pragma once

#include <stdint.h>
#include "Types.hpp"

namespace comm
{
    class IdentifierInterface : RESTPacket
    {
        public:
            IdentifierInterface() {

            }
            virtual void Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             uint8_t _identifier;


        protected :
            // Offsets
            const int IDENTIFIER_OFFSET = 1;

    };
} // namespace comm

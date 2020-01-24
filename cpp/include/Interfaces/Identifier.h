#pragma once


#include "Types.hpp"

namespace comm
{
    class IdentifierInterface : RestPacket
    {
        public:
            IdentifierInterface() {

            }
            // Variables
             uint8_t identifier;


            // Offsets
            const int IDENTIFIER_OFFSET = 1;


    };
} // namespace comm

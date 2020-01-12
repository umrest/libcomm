#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class IdentifierInterface
    {
        public:
            IdentifierInterface() {

            }
            virtual std::array<char*, 127> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             uint8_t _identifier;


        protected :
            // Offsets
            const int IDENTIFIER_OFFSET = 1;


    };
} // namespace comm

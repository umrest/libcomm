#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Identifier : IdentifierInterface
    {
        public:
            Identifier() {

            }
            
        std::array<char*, 127> Serialize() {
            std::array<char*, 127> data;
            
            uint8_t* identifier_ptr = &_identifier;
            std::copy(identifier_ptr, identifier_ptr + 1, data.begin() + IDENTIFIER_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            uint8_t* identifier_ptr = &_identifier;
            std::copy(data + IDENTIFIER_OFFSET, data + IDENTIFIER_OFFSET + 1, identifier_ptr);
            
 
        }
        

            // Accessors
             uint8_t identifier(){ return _identifier; }


    };
} // namespace comm

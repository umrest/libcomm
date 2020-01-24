#pragma once

#include "Interfaces/Identifier.h"


namespace comm
{
    class Identifier : IdentifierInterface
    {
        public:
            Identifier() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(127);
            
                std::copy((uint8_t*)&identifier, (uint8_t*)&identifier + 1, data.begin() + IDENTIFIER_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + IDENTIFIER_OFFSET, data.begin() + IDENTIFIER_OFFSET + 1, (uint8_t *)&identifier);
                
 
        }
        

            // Accessors
            
    };
} // namespace comm

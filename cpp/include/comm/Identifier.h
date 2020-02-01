#pragma once

#include "comm/IdentifierInterface.h"


namespace comm
{
    class Identifier : public IdentifierInterface
    {
        public:
            Identifier() {

            }
            // Accessors
             uint8_t _identifier(){ return identifier; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(128);
            
            data[0] = 250;
            
            
                uint8_t identifier_ = _identifier();
                uint8_t* identifier_data = (uint8_t*)&identifier_;
                std::copy(identifier_data, identifier_data + 1, data.begin() + IDENTIFIER_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + IDENTIFIER_OFFSET, data.begin() + IDENTIFIER_OFFSET + 1, (uint8_t *)&identifier);
                
 
        }
        

            
            
    };
} // namespace comm

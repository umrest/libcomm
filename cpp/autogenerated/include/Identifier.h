#pragma once

#include "IdentifierInterface.h"


namespace comm
{
    class Identifier : public IdentifierInterface
    {
        public:
            Identifier() {

            }
            // Accessors
            
            uint8_t get_identifier(){
                return _identifier;
            }
            void set_identifier(uint8_t val){
                _identifier = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            
            uint8_t* ___identifier = (uint8_t*)&_identifier;
            
            std::copy(___identifier, ___identifier + 1, data.begin() + identifier_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
                     
            
            std::copy(data.begin() + identifier_OFFSET, data.begin() + identifier_OFFSET + 1, (uint8_t *)&_identifier);
        
                     }
                

            
            
    };
} // namespace comm

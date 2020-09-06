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

void set_identifier(uint8_t other){
                _identifier = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            uint8_t* __identifier = (uint8_t*)&_identifier;

            std::copy(__identifier, __identifier + 1, data.begin() + IDENTIFIER_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        std::copy(data.begin() + IDENTIFIER_OFFSET, data.begin() + IDENTIFIER_OFFSET + 1, (uint8_t *)&_identifier);}
        

            
            
    };
} // namespace comm

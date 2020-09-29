#pragma once

#include "Debug_MessageInterface.h"


namespace comm
{
    class Debug_Message : public Debug_MessageInterface
    {
        public:
            Debug_Message() {

            }
            // Accessors
            uint8_t get_identifier(){
                return _identifier;
            }
char* get_message(){
                return _message;
            }

void set_identifier(uint8_t other){
                _identifier = other;
            };
void set_message(char* other){
                std::copy(other, other + 128, (uint8_t *)&_message);
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(129);
                     
            uint8_t* __identifier = (uint8_t*)&_identifier;

            std::copy(__identifier, __identifier + 1, data.begin() + IDENTIFIER_OFFSET);

            uint8_t* __message = (uint8_t*)_message;

            std::copy(__message, __message + 128, data.begin() + MESSAGE_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + IDENTIFIER_OFFSET, data.begin() + IDENTIFIER_OFFSET + 1, (uint8_t *)&_identifier);
        std::copy(data.begin() + MESSAGE_OFFSET, data.begin() + MESSAGE_OFFSET + 128, _message);}
        

            
            
    };
} // namespace comm

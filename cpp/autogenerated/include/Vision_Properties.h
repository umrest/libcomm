#pragma once

#include "Vision_PropertiesInterface.h"


namespace comm
{
    class Vision_Properties : public Vision_PropertiesInterface
    {
        public:
            Vision_Properties() {

            }
            // Accessors
            uint8_t get_command(){
                return _command;
            }

void set_command(uint8_t other){
                _command = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            uint8_t* __command = (uint8_t*)&_command;

            std::copy(__command, __command + 1, data.begin() + COMMAND_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        std::copy(data.begin() + COMMAND_OFFSET, data.begin() + COMMAND_OFFSET + 1, (uint8_t *)&_command);}
        

            
            
    };
} // namespace comm

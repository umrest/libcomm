#pragma once

#include "Realsense_CommandInterface.h"


namespace comm
{
    class Realsense_Command : public Realsense_CommandInterface
    {
        public:
            Realsense_Command() {

            }
            // Accessors
            
            uint8_t get_command(){
                return _command;
            }
            void set_command(uint8_t val){
                _command = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            
            uint8_t* ___command = (uint8_t*)&_command;
            
            std::copy(___command, ___command + 1, data.begin() + command_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            std::copy(data.begin() + command_OFFSET, data.begin() + command_OFFSET + 1, (uint8_t *)&_command);
            
                     }
                

            
            
    };
} // namespace comm

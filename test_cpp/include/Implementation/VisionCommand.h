#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class VisionCommand : VisionCommandInterface
    {
        public:
            VisionCommand() {

            }
            
        std::array<char*, 127> Serialize() {
            std::array<char*, 127> data;
            
            uint8_t* command_ptr = &_command;
            std::copy(command_ptr, command_ptr + 1, data.begin() + COMMAND_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            uint8_t* command_ptr = &_command;
            std::copy(data + COMMAND_OFFSET, data + COMMAND_OFFSET + 1, command_ptr);
            
 
        }
        

            // Accessors
             uint8_t command(){ return _command; }


    };
} // namespace comm

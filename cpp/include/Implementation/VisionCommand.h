#pragma once

#include "Interfaces/VisionCommand.h"


namespace comm
{
    class VisionCommand : VisionCommandInterface
    {
        public:
            VisionCommand() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(127);
            
                std::copy((uint8_t*)&command, (uint8_t*)&command + 1, data.begin() + COMMAND_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + COMMAND_OFFSET, data.begin() + COMMAND_OFFSET + 1, (uint8_t *)&command);
                
 
        }
        

            // Accessors
            
    };
} // namespace comm

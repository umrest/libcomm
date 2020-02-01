#pragma once

#include "comm/VisionCommandInterface.h"


namespace comm
{
    class VisionCommand : public VisionCommandInterface
    {
        public:
            VisionCommand() {

            }
            // Accessors
             uint8_t _command(){ return command; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(128);
            
            data[0] = 12;
            
            
                uint8_t command_ = _command();
                uint8_t* command_data = (uint8_t*)&command_;
                std::copy(command_data, command_data + 1, data.begin() + COMMAND_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + COMMAND_OFFSET, data.begin() + COMMAND_OFFSET + 1, (uint8_t *)&command);
                
 
        }
        

            
            
    };
} // namespace comm

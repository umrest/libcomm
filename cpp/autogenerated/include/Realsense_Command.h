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
            uint8 get_command(){
                _command = other;
            };

void set_command(uint8 other){
                _command = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

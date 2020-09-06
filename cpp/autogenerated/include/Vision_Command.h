#pragma once

#include "Vision_CommandInterface.h"


namespace comm
{
    class Vision_Command : public Vision_CommandInterface
    {
        public:
            Vision_Command() {

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

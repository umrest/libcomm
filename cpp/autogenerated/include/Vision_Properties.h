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
            uint8 get_command(){
                _command = other;
            };

void set_command(uint8 other){
                _command = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

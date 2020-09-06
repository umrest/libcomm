#pragma once

#include "HardwareInterface.h"


namespace comm
{
    class Hardware : public HardwareInterface
    {
        public:
            Hardware() {

            }
            // Accessors
            uint8 get_angle(){
                _angle = other;
            };

void set_angle(uint8 other){
                _angle = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

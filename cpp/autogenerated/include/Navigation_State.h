#pragma once

#include "Navigation_StateInterface.h"


namespace comm
{
    class Navigation_State : public Navigation_StateInterface
    {
        public:
            Navigation_State() {

            }
            // Accessors
            Field_Position get_field_position(){
                _field_position = other;
            };

void set_field_position(Field_Position other){
                _field_position = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

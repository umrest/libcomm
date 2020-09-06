#pragma once

#include "IdentifierInterface.h"


namespace comm
{
    class Identifier : public IdentifierInterface
    {
        public:
            Identifier() {

            }
            // Accessors
            uint8 get_identifier(){
                _identifier = other;
            };

void set_identifier(uint8 other){
                _identifier = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

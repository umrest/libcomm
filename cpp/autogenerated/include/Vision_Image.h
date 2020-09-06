#pragma once

#include "Vision_ImageInterface.h"


namespace comm
{
    class Vision_Image : public Vision_ImageInterface
    {
        public:
            Vision_Image() {

            }
            // Accessors
            bytearray get_image(){
                _image = other;
            };

void set_image(bytearray other){
                _image = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

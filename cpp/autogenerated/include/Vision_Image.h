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
            
            char* get_image(){
                return _image;
            }
            void set_image(char* val){
                _image = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8191);
                     
            
            uint8_t* ___image = (uint8_t*)_image;
            
            std::copy(___image, ___image + 8191, data.begin() + image_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            std::copy(data.begin() + image_OFFSET, data.begin() + image_OFFSET + 8191, (uint8_t *)&_image);
            
                     }
                

            
            
    };
} // namespace comm

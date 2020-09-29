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

void set_image(char* other){
                std::copy(other, other + 8191, (uint8_t *)&_image);
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8191);
                     
            uint8_t* __image = (uint8_t*)_image;

            std::copy(__image, __image + 8191, data.begin() + IMAGE_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + IMAGE_OFFSET, data.begin() + IMAGE_OFFSET + 8191, _image);}
        

            
            
    };
} // namespace comm

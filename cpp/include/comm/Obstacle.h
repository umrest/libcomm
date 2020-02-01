#pragma once

#include "comm/ObstacleInterface.h"


namespace comm
{
    class Obstacle : public ObstacleInterface
    {
        public:
            Obstacle() {

            }
            // Accessors
             float _x(){ return x*10; }

 float _y(){ return y*10; }

 float _width(){ return width*10; }

 float _height(){ return height*10; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(16);
            
            
                int16_t x_ = _x();
                uint8_t* x_data = (uint8_t*)&x_;
                std::copy(x_data, x_data + 2, data.begin() + X_OFFSET);
                

                int16_t y_ = _y();
                uint8_t* y_data = (uint8_t*)&y_;
                std::copy(y_data, y_data + 2, data.begin() + Y_OFFSET);
                

                int16_t width_ = _width();
                uint8_t* width_data = (uint8_t*)&width_;
                std::copy(width_data, width_data + 2, data.begin() + WIDTH_OFFSET);
                

                int16_t height_ = _height();
                uint8_t* height_data = (uint8_t*)&height_;
                std::copy(height_data, height_data + 2, data.begin() + HEIGHT_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&x);
                

                std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&y);
                

                std::copy(data.begin() + WIDTH_OFFSET, data.begin() + WIDTH_OFFSET + 2, (uint8_t *)&width);
                

                std::copy(data.begin() + HEIGHT_OFFSET, data.begin() + HEIGHT_OFFSET + 2, (uint8_t *)&height);
                
 
        }
        

            
            
    };
} // namespace comm

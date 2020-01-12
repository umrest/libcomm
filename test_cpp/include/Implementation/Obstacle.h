#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Obstacle : ObstacleInterface
    {
        public:
            Obstacle() {

            }
            
        std::array<char*, 16> Serialize() {
            std::array<char*, 16> data;
            
            int16_t* x_ptr = &_x;
            std::copy(x_ptr, x_ptr + 2, data.begin() + X_OFFSET);
            

            int16_t* y_ptr = &_y;
            std::copy(y_ptr, y_ptr + 2, data.begin() + Y_OFFSET);
            

            int16_t* width_ptr = &_width;
            std::copy(width_ptr, width_ptr + 2, data.begin() + WIDTH_OFFSET);
            

            int16_t* height_ptr = &_height;
            std::copy(height_ptr, height_ptr + 2, data.begin() + HEIGHT_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            int16_t* x_ptr = &_x;
            std::copy(data + X_OFFSET, data + X_OFFSET + 2, x_ptr);
            

            int16_t* y_ptr = &_y;
            std::copy(data + Y_OFFSET, data + Y_OFFSET + 2, y_ptr);
            

            int16_t* width_ptr = &_width;
            std::copy(data + WIDTH_OFFSET, data + WIDTH_OFFSET + 2, width_ptr);
            

            int16_t* height_ptr = &_height;
            std::copy(data + HEIGHT_OFFSET, data + HEIGHT_OFFSET + 2, height_ptr);
            
 
        }
        

            // Accessors
             float x(){ return _x*1/100; }

 float y(){ return _y*1/100; }

 float width(){ return _width*1/100; }

 float height(){ return _height*1/100; }


    };
} // namespace comm

#pragma once

#include "ObstacleInterface.h"


namespace comm
{
    class Obstacle : public ObstacleInterface
    {
        public:
            Obstacle() {

            }
            // Accessors
            float get_x(){
                return _x / 0.1;
            }
float get_y(){
                return _y / 0.1;
            }
float get_width(){
                return _width / 0.1;
            }
float get_height(){
                return _height / 0.1;
            }

void set_x(float other){
                _x = other * 0.1;
            };
void set_y(float other){
                _y = other * 0.1;
            };
void set_width(float other){
                _width = other * 0.1;
            };
void set_height(float other){
                _height = other * 0.1;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(16);
                     
            uint8_t* __x = (uint8_t*)&_x;

            std::copy(__x, __x + 2, data.begin() + X_OFFSET);

            uint8_t* __y = (uint8_t*)&_y;

            std::copy(__y, __y + 2, data.begin() + Y_OFFSET);

            uint8_t* __width = (uint8_t*)&_width;

            std::copy(__width, __width + 2, data.begin() + WIDTH_OFFSET);

            uint8_t* __height = (uint8_t*)&_height;

            std::copy(__height, __height + 2, data.begin() + HEIGHT_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&_x);
        std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&_y);
        std::copy(data.begin() + WIDTH_OFFSET, data.begin() + WIDTH_OFFSET + 2, (uint8_t *)&_width);
        std::copy(data.begin() + HEIGHT_OFFSET, data.begin() + HEIGHT_OFFSET + 2, (uint8_t *)&_height);}
        

            
            
    };
} // namespace comm

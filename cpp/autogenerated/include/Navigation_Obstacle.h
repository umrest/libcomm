#pragma once

#include "Navigation_ObstacleInterface.h"


namespace comm
{
    class Navigation_Obstacle : public Navigation_ObstacleInterface
    {
        public:
            Navigation_Obstacle() {

            }
            // Accessors
            int16_t get_x(){
                return _x;
            }
int16_t get_y(){
                return _y;
            }
int16_t get_width(){
                return _width;
            }
int16_t get_height(){
                return _height;
            }

void set_x(int16_t other){
                _x = other;
            };
void set_y(int16_t other){
                _y = other;
            };
void set_width(int16_t other){
                _width = other;
            };
void set_height(int16_t other){
                _height = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
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
        std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&_x);
        std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&_y);
        std::copy(data.begin() + WIDTH_OFFSET, data.begin() + WIDTH_OFFSET + 2, (uint8_t *)&_width);
        std::copy(data.begin() + HEIGHT_OFFSET, data.begin() + HEIGHT_OFFSET + 2, (uint8_t *)&_height);}
        

            
            
    };
} // namespace comm

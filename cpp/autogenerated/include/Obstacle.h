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
                return _x * 10;
            }
            void set_x(float val){
                _x = val / 10;
            }
            
            float get_y(){
                return _y * 10;
            }
            void set_y(float val){
                _y = val / 10;
            }
            
            float get_width(){
                return _width * 10;
            }
            void set_width(float val){
                _width = val / 10;
            }
            
            float get_height(){
                return _height * 10;
            }
            void set_height(float val){
                _height = val / 10;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(16);
                     
            
            uint8_t* ___x = (uint8_t*)&_x;
            
            std::copy(___x, ___x + 2, data.begin() + x_OFFSET);
            
            
            uint8_t* ___y = (uint8_t*)&_y;
            
            std::copy(___y, ___y + 2, data.begin() + y_OFFSET);
            
            
            uint8_t* ___width = (uint8_t*)&_width;
            
            std::copy(___width, ___width + 2, data.begin() + width_OFFSET);
            
            
            uint8_t* ___height = (uint8_t*)&_height;
            
            std::copy(___height, ___height + 2, data.begin() + height_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
                     
            
            std::copy(data.begin() + x_OFFSET, data.begin() + x_OFFSET + 1, (uint8_t *)&_x);
        
            
            std::copy(data.begin() + y_OFFSET, data.begin() + y_OFFSET + 1, (uint8_t *)&_y);
        
            
            std::copy(data.begin() + width_OFFSET, data.begin() + width_OFFSET + 1, (uint8_t *)&_width);
        
            
            std::copy(data.begin() + height_OFFSET, data.begin() + height_OFFSET + 1, (uint8_t *)&_height);
        
                     }
                

            
            
    };
} // namespace comm

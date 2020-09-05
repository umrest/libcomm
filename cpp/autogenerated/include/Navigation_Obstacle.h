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
            void set_x(int16_t val){
                _x = val;
            }
            
            int16_t get_y(){
                return _y;
            }
            void set_y(int16_t val){
                _y = val;
            }
            
            int16_t get_width(){
                return _width;
            }
            void set_width(int16_t val){
                _width = val;
            }
            
            int16_t get_height(){
                return _height;
            }
            void set_height(int16_t val){
                _height = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            
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
            
         std::vector<uint8_t> new_data;
                     
         
            std::copy(data.begin() + x_OFFSET, data.begin() + x_OFFSET + 2, (uint8_t *)&_x);
            
         
            std::copy(data.begin() + y_OFFSET, data.begin() + y_OFFSET + 2, (uint8_t *)&_y);
            
         
            std::copy(data.begin() + width_OFFSET, data.begin() + width_OFFSET + 2, (uint8_t *)&_width);
            
         
            std::copy(data.begin() + height_OFFSET, data.begin() + height_OFFSET + 2, (uint8_t *)&_height);
            
                     }
                

            
            
    };
} // namespace comm

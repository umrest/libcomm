#pragma once

#include "FieldPositionInterface.h"


namespace comm
{
    class FieldPosition : public FieldPositionInterface
    {
        public:
            FieldPosition() {

            }
            // Accessors
            
            float get_yaw(){
                return _yaw * 364.0888;
            }
            void set_yaw(float val){
                _yaw = val / 364.0888;
            }
            
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
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(6);
                     
            
            uint8_t* ___yaw = (uint8_t*)&_yaw;
            
            std::copy(___yaw, ___yaw + 2, data.begin() + yaw_OFFSET);
            
            
            uint8_t* ___x = (uint8_t*)&_x;
            
            std::copy(___x, ___x + 2, data.begin() + x_OFFSET);
            
            
            uint8_t* ___y = (uint8_t*)&_y;
            
            std::copy(___y, ___y + 2, data.begin() + y_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
                     
            
            std::copy(data.begin() + yaw_OFFSET, data.begin() + yaw_OFFSET + 1, (uint8_t *)&_yaw);
        
            
            std::copy(data.begin() + x_OFFSET, data.begin() + x_OFFSET + 1, (uint8_t *)&_x);
        
            
            std::copy(data.begin() + y_OFFSET, data.begin() + y_OFFSET + 1, (uint8_t *)&_y);
        
                     }
                

            
            
    };
} // namespace comm

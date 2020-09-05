#pragma once

#include "TagPositionInterface.h"


namespace comm
{
    class TagPosition : public TagPositionInterface
    {
        public:
            TagPosition() {

            }
            // Accessors
            
            float get_yaw(){
                return _yaw * 0.0027465827;
            }
            void set_yaw(float val){
                _yaw = val / 0.0027465827;
            }
            
            float get_pitch(){
                return _pitch * 0.0027465827;
            }
            void set_pitch(float val){
                _pitch = val / 0.0027465827;
            }
            
            float get_roll(){
                return _roll * 0.0027465827;
            }
            void set_roll(float val){
                _roll = val / 0.0027465827;
            }
            
            float get_x(){
                return _x * 0.1;
            }
            void set_x(float val){
                _x = val / 0.1;
            }
            
            float get_y(){
                return _y * 0.1;
            }
            void set_y(float val){
                _y = val / 0.1;
            }
            
            float get_z(){
                return _z * 0.1;
            }
            void set_z(float val){
                _z = val / 0.1;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(12);
                     
            
            uint8_t* ___yaw = (uint8_t*)&_yaw;
            
            std::copy(___yaw, ___yaw + 2, data.begin() + yaw_OFFSET);
            
            
            uint8_t* ___pitch = (uint8_t*)&_pitch;
            
            std::copy(___pitch, ___pitch + 2, data.begin() + pitch_OFFSET);
            
            
            uint8_t* ___roll = (uint8_t*)&_roll;
            
            std::copy(___roll, ___roll + 2, data.begin() + roll_OFFSET);
            
            
            uint8_t* ___x = (uint8_t*)&_x;
            
            std::copy(___x, ___x + 2, data.begin() + x_OFFSET);
            
            
            uint8_t* ___y = (uint8_t*)&_y;
            
            std::copy(___y, ___y + 2, data.begin() + y_OFFSET);
            
            
            uint8_t* ___z = (uint8_t*)&_z;
            
            std::copy(___z, ___z + 2, data.begin() + z_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            std::copy(data.begin() + yaw_OFFSET, data.begin() + yaw_OFFSET + 2, (uint8_t *)&_yaw);
            
         
            std::copy(data.begin() + pitch_OFFSET, data.begin() + pitch_OFFSET + 2, (uint8_t *)&_pitch);
            
         
            std::copy(data.begin() + roll_OFFSET, data.begin() + roll_OFFSET + 2, (uint8_t *)&_roll);
            
         
            std::copy(data.begin() + x_OFFSET, data.begin() + x_OFFSET + 2, (uint8_t *)&_x);
            
         
            std::copy(data.begin() + y_OFFSET, data.begin() + y_OFFSET + 2, (uint8_t *)&_y);
            
         
            std::copy(data.begin() + z_OFFSET, data.begin() + z_OFFSET + 2, (uint8_t *)&_z);
            
                     }
                

            
            
    };
} // namespace comm

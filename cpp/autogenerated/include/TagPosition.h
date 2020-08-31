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
            
            int16_t get_yaw(){
                return _yaw;
            }
            void set_yaw(int16_t val){
                _yaw = val;
            }
            
            int16_t get_pitch(){
                return _pitch;
            }
            void set_pitch(int16_t val){
                _pitch = val;
            }
            
            int16_t get_roll(){
                return _roll;
            }
            void set_roll(int16_t val){
                _roll = val;
            }
            
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
            
            int16_t get_z(){
                return _z;
            }
            void set_z(int16_t val){
                _z = val;
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
                     
            
            std::copy(data.begin() + yaw_OFFSET, data.begin() + yaw_OFFSET + 1, (uint8_t *)&_yaw);
        
            
            std::copy(data.begin() + pitch_OFFSET, data.begin() + pitch_OFFSET + 1, (uint8_t *)&_pitch);
        
            
            std::copy(data.begin() + roll_OFFSET, data.begin() + roll_OFFSET + 1, (uint8_t *)&_roll);
        
            
            std::copy(data.begin() + x_OFFSET, data.begin() + x_OFFSET + 1, (uint8_t *)&_x);
        
            
            std::copy(data.begin() + y_OFFSET, data.begin() + y_OFFSET + 1, (uint8_t *)&_y);
        
            
            std::copy(data.begin() + z_OFFSET, data.begin() + z_OFFSET + 1, (uint8_t *)&_z);
        
                     }
                

            
            
    };
} // namespace comm

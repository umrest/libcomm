#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class TagPosition : TagPositionInterface
    {
        public:
            TagPosition() {

            }
            
        std::array<char*, 12> Serialize() {
            std::array<char*, 12> data;
            
            int16_t* yaw_ptr = &_yaw;
            std::copy(yaw_ptr, yaw_ptr + 2, data.begin() + YAW_OFFSET);
            

            int16_t* pitch_ptr = &_pitch;
            std::copy(pitch_ptr, pitch_ptr + 2, data.begin() + PITCH_OFFSET);
            

            int16_t* roll_ptr = &_roll;
            std::copy(roll_ptr, roll_ptr + 2, data.begin() + ROLL_OFFSET);
            

            int16_t* x_ptr = &_x;
            std::copy(x_ptr, x_ptr + 2, data.begin() + X_OFFSET);
            

            int16_t* y_ptr = &_y;
            std::copy(y_ptr, y_ptr + 2, data.begin() + Y_OFFSET);
            

            int16_t* z_ptr = &_z;
            std::copy(z_ptr, z_ptr + 2, data.begin() + Z_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            int16_t* yaw_ptr = &_yaw;
            std::copy(data + YAW_OFFSET, data + YAW_OFFSET + 2, yaw_ptr);
            

            int16_t* pitch_ptr = &_pitch;
            std::copy(data + PITCH_OFFSET, data + PITCH_OFFSET + 2, pitch_ptr);
            

            int16_t* roll_ptr = &_roll;
            std::copy(data + ROLL_OFFSET, data + ROLL_OFFSET + 2, roll_ptr);
            

            int16_t* x_ptr = &_x;
            std::copy(data + X_OFFSET, data + X_OFFSET + 2, x_ptr);
            

            int16_t* y_ptr = &_y;
            std::copy(data + Y_OFFSET, data + Y_OFFSET + 2, y_ptr);
            

            int16_t* z_ptr = &_z;
            std::copy(data + Z_OFFSET, data + Z_OFFSET + 2, z_ptr);
            
 
        }
        

            // Accessors
             float yaw(){ return _yaw*1/100; }

 float pitch(){ return _pitch*1/100; }

 float roll(){ return _roll*1/100; }

 float x(){ return _x*1/100; }

 float y(){ return _y*1/100; }

 float z(){ return _z*1/100; }


    };
} // namespace comm

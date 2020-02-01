#pragma once

#include "comm/TagPositionInterface.h"


namespace comm
{
    class TagPosition : public TagPositionInterface
    {
        public:
            TagPosition() {

            }
            // Accessors
             int16_t _yaw(){ return yaw*364.0888; }

 int16_t _pitch(){ return pitch*364.0888; }

 int16_t _roll(){ return roll*364.0888; }

 int16_t _x(){ return x*10; }

 int16_t _y(){ return y*10; }

 int16_t _z(){ return z*10; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(12);
            
            
                int16_t yaw_ = _yaw();
                uint8_t* yaw_data = (uint8_t*)&yaw_;
                std::copy(yaw_data, yaw_data + 2, data.begin() + YAW_OFFSET);
                

                int16_t pitch_ = _pitch();
                uint8_t* pitch_data = (uint8_t*)&pitch_;
                std::copy(pitch_data, pitch_data + 2, data.begin() + PITCH_OFFSET);
                

                int16_t roll_ = _roll();
                uint8_t* roll_data = (uint8_t*)&roll_;
                std::copy(roll_data, roll_data + 2, data.begin() + ROLL_OFFSET);
                

                int16_t x_ = _x();
                uint8_t* x_data = (uint8_t*)&x_;
                std::copy(x_data, x_data + 2, data.begin() + X_OFFSET);
                

                int16_t y_ = _y();
                uint8_t* y_data = (uint8_t*)&y_;
                std::copy(y_data, y_data + 2, data.begin() + Y_OFFSET);
                

                int16_t z_ = _z();
                uint8_t* z_data = (uint8_t*)&z_;
                std::copy(z_data, z_data + 2, data.begin() + Z_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + YAW_OFFSET, data.begin() + YAW_OFFSET + 2, (uint8_t *)&yaw);
                

                std::copy(data.begin() + PITCH_OFFSET, data.begin() + PITCH_OFFSET + 2, (uint8_t *)&pitch);
                

                std::copy(data.begin() + ROLL_OFFSET, data.begin() + ROLL_OFFSET + 2, (uint8_t *)&roll);
                

                std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&x);
                

                std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&y);
                

                std::copy(data.begin() + Z_OFFSET, data.begin() + Z_OFFSET + 2, (uint8_t *)&z);
                
 
        }
        

            
            
    };
} // namespace comm

#pragma once

#include "comm/FieldPositionInterface.h"


namespace comm
{
    class FieldPosition : public FieldPositionInterface
    {
        public:
            FieldPosition() {

            }
            // Accessors
             float _yaw(){ return yaw*364.0888; }

 float _x(){ return x*10; }

 float _y(){ return y*10; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(12);
            
            
                int16_t yaw_ = _yaw();
                uint8_t* yaw_data = (uint8_t*)&yaw_;
                std::copy(yaw_data, yaw_data + 2, data.begin() + YAW_OFFSET);
                

                int16_t x_ = _x();
                uint8_t* x_data = (uint8_t*)&x_;
                std::copy(x_data, x_data + 2, data.begin() + X_OFFSET);
                

                int16_t y_ = _y();
                uint8_t* y_data = (uint8_t*)&y_;
                std::copy(y_data, y_data + 2, data.begin() + Y_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + YAW_OFFSET, data.begin() + YAW_OFFSET + 2, (uint8_t *)&yaw);
                

                std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&x);
                

                std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&y);
                
 
        }
        

            
            
    };
} // namespace comm

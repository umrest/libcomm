#pragma once

#include "Field_PositionInterface.h"


namespace comm
{
    class Field_Position : public Field_PositionInterface
    {
        public:
            Field_Position() {

            }
            // Accessors
            float get_yaw(){
                return _yaw * 0.0027465827;
            }
float get_x(){
                return _x * 0.1;
            }
float get_y(){
                return _y * 0.1;
            }

void set_yaw(float other){
                _yaw = other / 0.0027465827;
            };
void set_x(float other){
                _x = other / 0.1;
            };
void set_y(float other){
                _y = other / 0.1;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(6);
                     
            uint8_t* __yaw = (uint8_t*)&_yaw;

            std::copy(__yaw, __yaw + 2, data.begin() + YAW_OFFSET);

            uint8_t* __x = (uint8_t*)&_x;

            std::copy(__x, __x + 2, data.begin() + X_OFFSET);

            uint8_t* __y = (uint8_t*)&_y;

            std::copy(__y, __y + 2, data.begin() + Y_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + YAW_OFFSET, data.begin() + YAW_OFFSET + 2, (uint8_t *)&_yaw);
        std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&_x);
        std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&_y);}
        

            
            
    };
} // namespace comm

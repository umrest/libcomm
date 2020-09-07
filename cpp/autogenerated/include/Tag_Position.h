#pragma once

#include "Tag_PositionInterface.h"


namespace comm
{
    class Tag_Position : public Tag_PositionInterface
    {
        public:
            Tag_Position() {

            }
            // Accessors
            float get_yaw(){
                return _yaw * 0.0027465827;
            }
float get_pitch(){
                return _pitch * 0.0027465827;
            }
float get_roll(){
                return _roll * 0.0027465827;
            }
float get_x(){
                return _x * 0.1;
            }
float get_y(){
                return _y * 0.1;
            }
float get_z(){
                return _z * 0.1;
            }

void set_yaw(float other){
                _yaw = other / 0.0027465827;
            };
void set_pitch(float other){
                _pitch = other / 0.0027465827;
            };
void set_roll(float other){
                _roll = other / 0.0027465827;
            };
void set_x(float other){
                _x = other / 0.1;
            };
void set_y(float other){
                _y = other / 0.1;
            };
void set_z(float other){
                _z = other / 0.1;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(12);
                     
            uint8_t* __yaw = (uint8_t*)&_yaw;

            std::copy(__yaw, __yaw + 2, data.begin() + YAW_OFFSET);

            uint8_t* __pitch = (uint8_t*)&_pitch;

            std::copy(__pitch, __pitch + 2, data.begin() + PITCH_OFFSET);

            uint8_t* __roll = (uint8_t*)&_roll;

            std::copy(__roll, __roll + 2, data.begin() + ROLL_OFFSET);

            uint8_t* __x = (uint8_t*)&_x;

            std::copy(__x, __x + 2, data.begin() + X_OFFSET);

            uint8_t* __y = (uint8_t*)&_y;

            std::copy(__y, __y + 2, data.begin() + Y_OFFSET);

            uint8_t* __z = (uint8_t*)&_z;

            std::copy(__z, __z + 2, data.begin() + Z_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + YAW_OFFSET, data.begin() + YAW_OFFSET + 2, (uint8_t *)&_yaw);
        std::copy(data.begin() + PITCH_OFFSET, data.begin() + PITCH_OFFSET + 2, (uint8_t *)&_pitch);
        std::copy(data.begin() + ROLL_OFFSET, data.begin() + ROLL_OFFSET + 2, (uint8_t *)&_roll);
        std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&_x);
        std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&_y);
        std::copy(data.begin() + Z_OFFSET, data.begin() + Z_OFFSET + 2, (uint8_t *)&_z);}
        

            
            
    };
} // namespace comm

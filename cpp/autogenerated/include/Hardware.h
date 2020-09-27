#pragma once

#include "HardwareInterface.h"


namespace comm
{
    class Hardware : public HardwareInterface
    {
        public:
            Hardware() {

            }
            // Accessors
            uint8_t get_angle(){
                return _angle;
            }
uint8_t get_r(){
                return _r;
            }
uint8_t get_g(){
                return _g;
            }
uint8_t get_b(){
                return _b;
            }

void set_angle(uint8_t other){
                _angle = other;
            };
void set_r(uint8_t other){
                _r = other;
            };
void set_g(uint8_t other){
                _g = other;
            };
void set_b(uint8_t other){
                _b = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            uint8_t* __angle = (uint8_t*)&_angle;

            std::copy(__angle, __angle + 1, data.begin() + ANGLE_OFFSET);

            uint8_t* __r = (uint8_t*)&_r;

            std::copy(__r, __r + 1, data.begin() + R_OFFSET);

            uint8_t* __g = (uint8_t*)&_g;

            std::copy(__g, __g + 1, data.begin() + G_OFFSET);

            uint8_t* __b = (uint8_t*)&_b;

            std::copy(__b, __b + 1, data.begin() + B_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + ANGLE_OFFSET, data.begin() + ANGLE_OFFSET + 1, (uint8_t *)&_angle);
        std::copy(data.begin() + R_OFFSET, data.begin() + R_OFFSET + 1, (uint8_t *)&_r);
        std::copy(data.begin() + G_OFFSET, data.begin() + G_OFFSET + 1, (uint8_t *)&_g);
        std::copy(data.begin() + B_OFFSET, data.begin() + B_OFFSET + 1, (uint8_t *)&_b);}
        

            
            
    };
} // namespace comm

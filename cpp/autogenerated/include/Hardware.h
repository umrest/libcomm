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

void set_angle(uint8_t other){
                _angle = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            uint8_t* __angle = (uint8_t*)&_angle;

            std::copy(__angle, __angle + 1, data.begin() + ANGLE_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + ANGLE_OFFSET, data.begin() + ANGLE_OFFSET + 1, (uint8_t *)&_angle);}
        

            
            
    };
} // namespace comm

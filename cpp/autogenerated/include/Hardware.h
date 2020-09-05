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
            void set_angle(uint8_t val){
                _angle = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            
            uint8_t* ___angle = (uint8_t*)&_angle;
            
            std::copy(___angle, ___angle + 1, data.begin() + angle_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            std::copy(data.begin() + angle_OFFSET, data.begin() + angle_OFFSET + 1, (uint8_t *)&_angle);
            
                     }
                

            
            
    };
} // namespace comm

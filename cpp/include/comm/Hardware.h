#pragma once

#include "comm/HardwareInterface.h"


namespace comm
{
    class Hardware : public HardwareInterface
    {
        public:
            Hardware() {

            }
            // Accessors
             uint8_t _angle(){ return angle; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(8);
            
            
                uint8_t angle_ = _angle();
                uint8_t* angle_data = (uint8_t*)&angle_;
                std::copy(angle_data, angle_data + 1, data.begin() + ANGLE_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::copy(data.begin() + ANGLE_OFFSET, data.begin() + ANGLE_OFFSET + 1, (uint8_t *)&angle);
                
 
        }
        

            
            
    };
} // namespace comm

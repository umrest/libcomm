#pragma once

#include "Vision_PropertiesInterface.h"


namespace comm
{
    class Vision_Properties : public Vision_PropertiesInterface
    {
        public:
            Vision_Properties() {

            }
            // Accessors
            uint32_t get_exposure(){
                return _exposure;
            }
uint32_t get_gain(){
                return _gain;
            }

void set_exposure(uint32_t other){
                _exposure = other;
            };
void set_gain(uint32_t other){
                _gain = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            uint8_t* __exposure = (uint8_t*)&_exposure;

            std::copy(__exposure, __exposure + 4, data.begin() + EXPOSURE_OFFSET);

            uint8_t* __gain = (uint8_t*)&_gain;

            std::copy(__gain, __gain + 4, data.begin() + GAIN_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        std::copy(data.begin() + EXPOSURE_OFFSET, data.begin() + EXPOSURE_OFFSET + 4, (uint8_t *)&_exposure);
        std::copy(data.begin() + GAIN_OFFSET, data.begin() + GAIN_OFFSET + 4, (uint8_t *)&_gain);}
        

            
            
    };
} // namespace comm

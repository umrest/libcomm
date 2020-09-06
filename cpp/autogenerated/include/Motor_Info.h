#pragma once

#include "Motor_InfoInterface.h"


namespace comm
{
    class Motor_Info : public Motor_InfoInterface
    {
        public:
            Motor_Info() {

            }
            // Accessors
            

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(16);
                     
        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;}
        

            
            
    };
} // namespace comm

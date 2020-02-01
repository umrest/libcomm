#pragma once

#include "comm/RealsenseInterface.h"


namespace comm
{
    class Realsense : public RealsenseInterface
    {
        public:
            Realsense() {

            }
            // Accessors
             Obstacle _obstacle_1(){ return obstacle_1; }

 Obstacle _obstacle_2(){ return obstacle_2; }

 Obstacle _obstacle_3(){ return obstacle_3; }

 Obstacle _obstacle_4(){ return obstacle_4; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(128);
            
            data[0] = 3;
            
            
                std::vector<uint8_t> obstacle_1_data = obstacle_1.Serialize();
                std::copy(obstacle_1_data.begin(), obstacle_1_data.begin() + 16, data.begin() + OBSTACLE_1_OFFSET);
                

                std::vector<uint8_t> obstacle_2_data = obstacle_2.Serialize();
                std::copy(obstacle_2_data.begin(), obstacle_2_data.begin() + 16, data.begin() + OBSTACLE_2_OFFSET);
                

                std::vector<uint8_t> obstacle_3_data = obstacle_3.Serialize();
                std::copy(obstacle_3_data.begin(), obstacle_3_data.begin() + 16, data.begin() + OBSTACLE_3_OFFSET);
                

                std::vector<uint8_t> obstacle_4_data = obstacle_4.Serialize();
                std::copy(obstacle_4_data.begin(), obstacle_4_data.begin() + 16, data.begin() + OBSTACLE_4_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::vector<uint8_t> obstacle_1_data(data.begin() + OBSTACLE_1_OFFSET, data.begin() + OBSTACLE_1_OFFSET + 16);
                obstacle_1.Deserialize(obstacle_1_data);
                

                std::vector<uint8_t> obstacle_2_data(data.begin() + OBSTACLE_2_OFFSET, data.begin() + OBSTACLE_2_OFFSET + 16);
                obstacle_2.Deserialize(obstacle_2_data);
                

                std::vector<uint8_t> obstacle_3_data(data.begin() + OBSTACLE_3_OFFSET, data.begin() + OBSTACLE_3_OFFSET + 16);
                obstacle_3.Deserialize(obstacle_3_data);
                

                std::vector<uint8_t> obstacle_4_data(data.begin() + OBSTACLE_4_OFFSET, data.begin() + OBSTACLE_4_OFFSET + 16);
                obstacle_4.Deserialize(obstacle_4_data);
                
 
        }
        

            
            
    };
} // namespace comm

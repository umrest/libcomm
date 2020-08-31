#pragma once

#include "RealsenseInterface.h"
#include "ObstacleInterface.h"


namespace comm
{
    class Realsense : public RealsenseInterface
    {
        public:
            Realsense() {

            }
            // Accessors
            
            Obstacle get_obstacle_1(){
                return _obstacle_1;
            }
            void set_obstacle_1(Obstacle val){
                _obstacle_1 = val;
            }
            
            Obstacle get_obstacle_2(){
                return _obstacle_2;
            }
            void set_obstacle_2(Obstacle val){
                _obstacle_2 = val;
            }
            
            Obstacle get_obstacle_3(){
                return _obstacle_3;
            }
            void set_obstacle_3(Obstacle val){
                _obstacle_3 = val;
            }
            
            Obstacle get_obstacle_4(){
                return _obstacle_4;
            }
            void set_obstacle_4(Obstacle val){
                _obstacle_4 = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            std::vector<uint8_t> __obstacle_1 = _obstacle_1.Serialize();
                    uint8_t* ___obstacle_1= &__obstacle_1[0];
            std::copy(___obstacle_1, ___obstacle_1 + 16, data.begin() + obstacle_1_OFFSET);
            
            std::vector<uint8_t> __obstacle_2 = _obstacle_2.Serialize();
                    uint8_t* ___obstacle_2= &__obstacle_2[0];
            std::copy(___obstacle_2, ___obstacle_2 + 16, data.begin() + obstacle_2_OFFSET);
            
            std::vector<uint8_t> __obstacle_3 = _obstacle_3.Serialize();
                    uint8_t* ___obstacle_3= &__obstacle_3[0];
            std::copy(___obstacle_3, ___obstacle_3 + 16, data.begin() + obstacle_3_OFFSET);
            
            std::vector<uint8_t> __obstacle_4 = _obstacle_4.Serialize();
                    uint8_t* ___obstacle_4= &__obstacle_4[0];
            std::copy(___obstacle_4, ___obstacle_4 + 16, data.begin() + obstacle_4_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
                     
            
            std::copy(data.begin() + obstacle_1_OFFSET, data.begin() + obstacle_1_OFFSET + 1, (uint8_t *)&_obstacle_1);
        
            
            std::copy(data.begin() + obstacle_2_OFFSET, data.begin() + obstacle_2_OFFSET + 1, (uint8_t *)&_obstacle_2);
        
            
            std::copy(data.begin() + obstacle_3_OFFSET, data.begin() + obstacle_3_OFFSET + 1, (uint8_t *)&_obstacle_3);
        
            
            std::copy(data.begin() + obstacle_4_OFFSET, data.begin() + obstacle_4_OFFSET + 1, (uint8_t *)&_obstacle_4);
        
                     }
                

            
            
    };
} // namespace comm

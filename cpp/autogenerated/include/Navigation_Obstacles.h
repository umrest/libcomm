#pragma once

#include "Navigation_ObstaclesInterface.h"
#include "Navigation_ObstacleInterface.h"


namespace comm
{
    class Navigation_Obstacles : public Navigation_ObstaclesInterface
    {
        public:
            Navigation_Obstacles() {

            }
            // Accessors
            
            Navigation_Obstacle get_obstacle_0(){
                return _obstacle_0;
            }
            void set_obstacle_0(Navigation_Obstacle val){
                _obstacle_0 = val;
            }
            
            Navigation_Obstacle get_obstacle_1(){
                return _obstacle_1;
            }
            void set_obstacle_1(Navigation_Obstacle val){
                _obstacle_1 = val;
            }
            
            Navigation_Obstacle get_obstacle_2(){
                return _obstacle_2;
            }
            void set_obstacle_2(Navigation_Obstacle val){
                _obstacle_2 = val;
            }
            
            Navigation_Obstacle get_obstacle_3(){
                return _obstacle_3;
            }
            void set_obstacle_3(Navigation_Obstacle val){
                _obstacle_3 = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(200);
                     
            std::vector<uint8_t> __obstacle_0 = _obstacle_0.Serialize();
                    uint8_t* ___obstacle_0= &__obstacle_0[0];
            std::copy(___obstacle_0, ___obstacle_0 + 8, data.begin() + obstacle_0_OFFSET);
            
            std::vector<uint8_t> __obstacle_1 = _obstacle_1.Serialize();
                    uint8_t* ___obstacle_1= &__obstacle_1[0];
            std::copy(___obstacle_1, ___obstacle_1 + 8, data.begin() + obstacle_1_OFFSET);
            
            std::vector<uint8_t> __obstacle_2 = _obstacle_2.Serialize();
                    uint8_t* ___obstacle_2= &__obstacle_2[0];
            std::copy(___obstacle_2, ___obstacle_2 + 8, data.begin() + obstacle_2_OFFSET);
            
            std::vector<uint8_t> __obstacle_3 = _obstacle_3.Serialize();
                    uint8_t* ___obstacle_3= &__obstacle_3[0];
            std::copy(___obstacle_3, ___obstacle_3 + 8, data.begin() + obstacle_3_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + obstacle_0_OFFSET, data.begin() + obstacle_0_OFFSET + 8, new_data.begin());
            _obstacle_0.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + obstacle_1_OFFSET, data.begin() + obstacle_1_OFFSET + 8, new_data.begin());
            _obstacle_1.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + obstacle_2_OFFSET, data.begin() + obstacle_2_OFFSET + 8, new_data.begin());
            _obstacle_2.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + obstacle_3_OFFSET, data.begin() + obstacle_3_OFFSET + 8, new_data.begin());
            _obstacle_3.Deserialize(new_data);
            
                     }
                

            
            
    };
} // namespace comm

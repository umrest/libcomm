#pragma once

#include "Navigation_ObstaclesInterface.h"


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
Navigation_Obstacle get_obstacle_1(){
                return _obstacle_1;
            }
Navigation_Obstacle get_obstacle_2(){
                return _obstacle_2;
            }
Navigation_Obstacle get_obstacle_3(){
                return _obstacle_3;
            }

void set_obstacle_0(Navigation_Obstacle other){
                _obstacle_0 = other;
            };
void set_obstacle_1(Navigation_Obstacle other){
                _obstacle_1 = other;
            };
void set_obstacle_2(Navigation_Obstacle other){
                _obstacle_2 = other;
            };
void set_obstacle_3(Navigation_Obstacle other){
                _obstacle_3 = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(120);
                     
            
            auto ___obstacle_0 = _obstacle_0.Serialize();
            uint8_t* __obstacle_0 = (uint8_t*)&___obstacle_0[0];

            std::copy(__obstacle_0, __obstacle_0 + 8, data.begin() + OBSTACLE_0_OFFSET);

            
            auto ___obstacle_1 = _obstacle_1.Serialize();
            uint8_t* __obstacle_1 = (uint8_t*)&___obstacle_1[0];

            std::copy(__obstacle_1, __obstacle_1 + 8, data.begin() + OBSTACLE_1_OFFSET);

            
            auto ___obstacle_2 = _obstacle_2.Serialize();
            uint8_t* __obstacle_2 = (uint8_t*)&___obstacle_2[0];

            std::copy(__obstacle_2, __obstacle_2 + 8, data.begin() + OBSTACLE_2_OFFSET);

            
            auto ___obstacle_3 = _obstacle_3.Serialize();
            uint8_t* __obstacle_3 = (uint8_t*)&___obstacle_3[0];

            std::copy(__obstacle_3, __obstacle_3 + 8, data.begin() + OBSTACLE_3_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        
            std::vector<uint8_t> __obstacle_0(8);
            std::copy(data.begin() + OBSTACLE_0_OFFSET, data.begin() + OBSTACLE_0_OFFSET + 8, new_data.begin());
            _obstacle_0.Deserialize(__obstacle_0);
        
            std::vector<uint8_t> __obstacle_1(8);
            std::copy(data.begin() + OBSTACLE_1_OFFSET, data.begin() + OBSTACLE_1_OFFSET + 8, new_data.begin());
            _obstacle_1.Deserialize(__obstacle_1);
        
            std::vector<uint8_t> __obstacle_2(8);
            std::copy(data.begin() + OBSTACLE_2_OFFSET, data.begin() + OBSTACLE_2_OFFSET + 8, new_data.begin());
            _obstacle_2.Deserialize(__obstacle_2);
        
            std::vector<uint8_t> __obstacle_3(8);
            std::copy(data.begin() + OBSTACLE_3_OFFSET, data.begin() + OBSTACLE_3_OFFSET + 8, new_data.begin());
            _obstacle_3.Deserialize(__obstacle_3);}
        

            
            
    };
} // namespace comm

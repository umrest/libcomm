#pragma once

#include "RealsenseInterface.h"


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
Obstacle get_obstacle_2(){
                return _obstacle_2;
            }
Obstacle get_obstacle_3(){
                return _obstacle_3;
            }
Obstacle get_obstacle_4(){
                return _obstacle_4;
            }

void set_obstacle_1(Obstacle other){
                _obstacle_1 = other;
            };
void set_obstacle_2(Obstacle other){
                _obstacle_2 = other;
            };
void set_obstacle_3(Obstacle other){
                _obstacle_3 = other;
            };
void set_obstacle_4(Obstacle other){
                _obstacle_4 = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            
            auto ___obstacle_1 = _obstacle_1.Serialize();
            uint8_t* __obstacle_1 = (uint8_t*)&___obstacle_1[0];

            std::copy(__obstacle_1, __obstacle_1 + 16, data.begin() + OBSTACLE_1_OFFSET);

            
            auto ___obstacle_2 = _obstacle_2.Serialize();
            uint8_t* __obstacle_2 = (uint8_t*)&___obstacle_2[0];

            std::copy(__obstacle_2, __obstacle_2 + 16, data.begin() + OBSTACLE_2_OFFSET);

            
            auto ___obstacle_3 = _obstacle_3.Serialize();
            uint8_t* __obstacle_3 = (uint8_t*)&___obstacle_3[0];

            std::copy(__obstacle_3, __obstacle_3 + 16, data.begin() + OBSTACLE_3_OFFSET);

            
            auto ___obstacle_4 = _obstacle_4.Serialize();
            uint8_t* __obstacle_4 = (uint8_t*)&___obstacle_4[0];

            std::copy(__obstacle_4, __obstacle_4 + 16, data.begin() + OBSTACLE_4_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        
            std::vector<uint8_t> __obstacle_1(16);
            std::copy(data.begin() + OBSTACLE_1_OFFSET, data.begin() + OBSTACLE_1_OFFSET + 16, new_data.begin());
            _obstacle_1.Deserialize(__obstacle_1);
        
            std::vector<uint8_t> __obstacle_2(16);
            std::copy(data.begin() + OBSTACLE_2_OFFSET, data.begin() + OBSTACLE_2_OFFSET + 16, new_data.begin());
            _obstacle_2.Deserialize(__obstacle_2);
        
            std::vector<uint8_t> __obstacle_3(16);
            std::copy(data.begin() + OBSTACLE_3_OFFSET, data.begin() + OBSTACLE_3_OFFSET + 16, new_data.begin());
            _obstacle_3.Deserialize(__obstacle_3);
        
            std::vector<uint8_t> __obstacle_4(16);
            std::copy(data.begin() + OBSTACLE_4_OFFSET, data.begin() + OBSTACLE_4_OFFSET + 16, new_data.begin());
            _obstacle_4.Deserialize(__obstacle_4);}
        

            
            
    };
} // namespace comm

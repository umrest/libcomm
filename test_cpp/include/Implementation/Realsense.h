#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Realsense : RealsenseInterface
    {
        public:
            Realsense() {

            }
            
        std::array<char*, 127> Serialize() {
            std::array<char*, 127> data;
            
            Obstacle* obstacle_1_ptr = &_obstacle_1;
            std::copy(obstacle_1_ptr, obstacle_1_ptr + 16, data.begin() + OBSTACLE_1_OFFSET);
            

            Obstacle* obstacle_2_ptr = &_obstacle_2;
            std::copy(obstacle_2_ptr, obstacle_2_ptr + 16, data.begin() + OBSTACLE_2_OFFSET);
            

            Obstacle* obstacle_3_ptr = &_obstacle_3;
            std::copy(obstacle_3_ptr, obstacle_3_ptr + 16, data.begin() + OBSTACLE_3_OFFSET);
            

            Obstacle* obstacle_4_ptr = &_obstacle_4;
            std::copy(obstacle_4_ptr, obstacle_4_ptr + 16, data.begin() + OBSTACLE_4_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            Obstacle* obstacle_1_ptr = &_obstacle_1;
            std::copy(data + OBSTACLE_1_OFFSET, data + OBSTACLE_1_OFFSET + 16, obstacle_1_ptr);
            

            Obstacle* obstacle_2_ptr = &_obstacle_2;
            std::copy(data + OBSTACLE_2_OFFSET, data + OBSTACLE_2_OFFSET + 16, obstacle_2_ptr);
            

            Obstacle* obstacle_3_ptr = &_obstacle_3;
            std::copy(data + OBSTACLE_3_OFFSET, data + OBSTACLE_3_OFFSET + 16, obstacle_3_ptr);
            

            Obstacle* obstacle_4_ptr = &_obstacle_4;
            std::copy(data + OBSTACLE_4_OFFSET, data + OBSTACLE_4_OFFSET + 16, obstacle_4_ptr);
            
 
        }
        

            // Accessors
             Obstacle obstacle_1(){ return _obstacle_1; }

 Obstacle obstacle_2(){ return _obstacle_2; }

 Obstacle obstacle_3(){ return _obstacle_3; }

 Obstacle obstacle_4(){ return _obstacle_4; }


    };
} // namespace comm

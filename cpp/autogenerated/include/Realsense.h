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
                _obstacle_1 = other;
            };
Obstacle get_obstacle_2(){
                _obstacle_2 = other;
            };
Obstacle get_obstacle_3(){
                _obstacle_3 = other;
            };
Obstacle get_obstacle_4(){
                _obstacle_4 = other;
            };

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
            

            
            
    };
} // namespace comm

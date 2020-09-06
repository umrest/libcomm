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
                _obstacle_0 = other;
            };
Navigation_Obstacle get_obstacle_1(){
                _obstacle_1 = other;
            };
Navigation_Obstacle get_obstacle_2(){
                _obstacle_2 = other;
            };
Navigation_Obstacle get_obstacle_3(){
                _obstacle_3 = other;
            };

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
            

            
            
    };
} // namespace comm

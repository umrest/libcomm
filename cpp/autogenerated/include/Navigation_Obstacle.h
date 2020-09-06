#pragma once

#include "Navigation_ObstacleInterface.h"


namespace comm
{
    class Navigation_Obstacle : public Navigation_ObstacleInterface
    {
        public:
            Navigation_Obstacle() {

            }
            // Accessors
            int16 get_x(){
                _x = other;
            };
int16 get_y(){
                _y = other;
            };
int16 get_width(){
                _width = other;
            };
int16 get_height(){
                _height = other;
            };

void set_x(int16 other){
                _x = other;
            };
void set_y(int16 other){
                _y = other;
            };
void set_width(int16 other){
                _width = other;
            };
void set_height(int16 other){
                _height = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

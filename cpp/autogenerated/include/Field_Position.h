#pragma once

#include "Field_PositionInterface.h"


namespace comm
{
    class Field_Position : public Field_PositionInterface
    {
        public:
            Field_Position() {

            }
            // Accessors
            float get_yaw(){
                return other / 0.0027465827;
            };
float get_x(){
                return other / 0.1;
            };
float get_y(){
                return other / 0.1;
            };

void set_yaw(float other){
                _yaw = other * 0.0027465827;
            };
void set_x(float other){
                _x = other * 0.1;
            };
void set_y(float other){
                _y = other * 0.1;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

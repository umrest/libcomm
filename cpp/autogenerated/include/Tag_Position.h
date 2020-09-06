#pragma once

#include "Tag_PositionInterface.h"


namespace comm
{
    class Tag_Position : public Tag_PositionInterface
    {
        public:
            Tag_Position() {

            }
            // Accessors
            float get_yaw(){
                return other / 0.0027465827;
            };
float get_pitch(){
                return other / 0.0027465827;
            };
float get_roll(){
                return other / 0.0027465827;
            };
float get_x(){
                return other / 0.1;
            };
float get_y(){
                return other / 0.1;
            };
float get_z(){
                return other / 0.1;
            };

void set_yaw(float other){
                _yaw = other * 0.0027465827;
            };
void set_pitch(float other){
                _pitch = other * 0.0027465827;
            };
void set_roll(float other){
                _roll = other * 0.0027465827;
            };
void set_x(float other){
                _x = other * 0.1;
            };
void set_y(float other){
                _y = other * 0.1;
            };
void set_z(float other){
                _z = other * 0.1;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

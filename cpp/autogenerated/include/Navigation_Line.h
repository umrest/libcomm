#pragma once

#include "Navigation_LineInterface.h"


namespace comm
{
    class Navigation_Line : public Navigation_LineInterface
    {
        public:
            Navigation_Line() {

            }
            // Accessors
            int16 get_x_start(){
                _x_start = other;
            };
int16 get_y_start(){
                _y_start = other;
            };
int16 get_x_end(){
                _x_end = other;
            };
int16 get_y_end(){
                _y_end = other;
            };

void set_x_start(int16 other){
                _x_start = other;
            };
void set_y_start(int16 other){
                _y_start = other;
            };
void set_x_end(int16 other){
                _x_end = other;
            };
void set_y_end(int16 other){
                _y_end = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

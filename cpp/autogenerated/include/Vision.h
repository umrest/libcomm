#pragma once

#include "VisionInterface.h"


namespace comm
{
    class Vision : public VisionInterface
    {
        public:
            Vision() {

            }
            // Accessors
            Tag_Position get_tag0(){
                _tag0 = other;
            };
Tag_Position get_tag1(){
                _tag1 = other;
            };
Field_Position get_field_position(){
                _field_position = other;
            };
uint8 get_vision_good(){
                _vision_good = other;
            };

void set_tag0(Tag_Position other){
                _tag0 = other;
            };
void set_tag1(Tag_Position other){
                _tag1 = other;
            };
void set_field_position(Field_Position other){
                _field_position = other;
            };
void set_vision_good(uint8 other){
                _vision_good = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

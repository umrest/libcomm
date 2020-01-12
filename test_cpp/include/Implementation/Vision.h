#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Vision : VisionInterface
    {
        public:
            Vision() {

            }
            
        std::array<char*, 127> Serialize() {
            std::array<char*, 127> data;
            
            TagPosition* tag0_ptr = &_tag0;
            std::copy(tag0_ptr, tag0_ptr + 12, data.begin() + TAG0_OFFSET);
            

            TagPosition* tag1_ptr = &_tag1;
            std::copy(tag1_ptr, tag1_ptr + 12, data.begin() + TAG1_OFFSET);
            

            FieldPosition* field_position_ptr = &_field_position;
            std::copy(field_position_ptr, field_position_ptr + 12, data.begin() + FIELD_POSITION_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            TagPosition* tag0_ptr = &_tag0;
            std::copy(data + TAG0_OFFSET, data + TAG0_OFFSET + 12, tag0_ptr);
            

            TagPosition* tag1_ptr = &_tag1;
            std::copy(data + TAG1_OFFSET, data + TAG1_OFFSET + 12, tag1_ptr);
            

            FieldPosition* field_position_ptr = &_field_position;
            std::copy(data + FIELD_POSITION_OFFSET, data + FIELD_POSITION_OFFSET + 12, field_position_ptr);
            
 
        }
        

            // Accessors
             TagPosition tag0(){ return _tag0; }

 TagPosition tag1(){ return _tag1; }

 FieldPosition field_position(){ return _field_position; }


    };
} // namespace comm

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
            
            int16_t get_x_start(){
                return _x_start;
            }
            void set_x_start(int16_t val){
                _x_start = val;
            }
            
            int16_t get_y_start(){
                return _y_start;
            }
            void set_y_start(int16_t val){
                _y_start = val;
            }
            
            int16_t get_x_end(){
                return _x_end;
            }
            void set_x_end(int16_t val){
                _x_end = val;
            }
            
            int16_t get_y_end(){
                return _y_end;
            }
            void set_y_end(int16_t val){
                _y_end = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            
            uint8_t* ___x_start = (uint8_t*)&_x_start;
            
            std::copy(___x_start, ___x_start + 2, data.begin() + x_start_OFFSET);
            
            
            uint8_t* ___y_start = (uint8_t*)&_y_start;
            
            std::copy(___y_start, ___y_start + 2, data.begin() + y_start_OFFSET);
            
            
            uint8_t* ___x_end = (uint8_t*)&_x_end;
            
            std::copy(___x_end, ___x_end + 2, data.begin() + x_end_OFFSET);
            
            
            uint8_t* ___y_end = (uint8_t*)&_y_end;
            
            std::copy(___y_end, ___y_end + 2, data.begin() + y_end_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            std::copy(data.begin() + x_start_OFFSET, data.begin() + x_start_OFFSET + 2, (uint8_t *)&_x_start);
            
         
            std::copy(data.begin() + y_start_OFFSET, data.begin() + y_start_OFFSET + 2, (uint8_t *)&_y_start);
            
         
            std::copy(data.begin() + x_end_OFFSET, data.begin() + x_end_OFFSET + 2, (uint8_t *)&_x_end);
            
         
            std::copy(data.begin() + y_end_OFFSET, data.begin() + y_end_OFFSET + 2, (uint8_t *)&_y_end);
            
                     }
                

            
            
    };
} // namespace comm

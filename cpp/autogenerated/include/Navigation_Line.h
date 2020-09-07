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
int16_t get_y_start(){
                return _y_start;
            }
int16_t get_x_end(){
                return _x_end;
            }
int16_t get_y_end(){
                return _y_end;
            }

void set_x_start(int16_t other){
                _x_start = other;
            };
void set_y_start(int16_t other){
                _y_start = other;
            };
void set_x_end(int16_t other){
                _x_end = other;
            };
void set_y_end(int16_t other){
                _y_end = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            uint8_t* __x_start = (uint8_t*)&_x_start;

            std::copy(__x_start, __x_start + 2, data.begin() + X_START_OFFSET);

            uint8_t* __y_start = (uint8_t*)&_y_start;

            std::copy(__y_start, __y_start + 2, data.begin() + Y_START_OFFSET);

            uint8_t* __x_end = (uint8_t*)&_x_end;

            std::copy(__x_end, __x_end + 2, data.begin() + X_END_OFFSET);

            uint8_t* __y_end = (uint8_t*)&_y_end;

            std::copy(__y_end, __y_end + 2, data.begin() + Y_END_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + X_START_OFFSET, data.begin() + X_START_OFFSET + 2, (uint8_t *)&_x_start);
        std::copy(data.begin() + Y_START_OFFSET, data.begin() + Y_START_OFFSET + 2, (uint8_t *)&_y_start);
        std::copy(data.begin() + X_END_OFFSET, data.begin() + X_END_OFFSET + 2, (uint8_t *)&_x_end);
        std::copy(data.begin() + Y_END_OFFSET, data.begin() + Y_END_OFFSET + 2, (uint8_t *)&_y_end);}
        

            
            
    };
} // namespace comm

#pragma once

#include "Navigation_PointInterface.h"


namespace comm
{
    class Navigation_Point : public Navigation_PointInterface
    {
        public:
            Navigation_Point() {

            }
            // Accessors
            int16_t get_x(){
                return _x;
            }
int16_t get_y(){
                return _y;
            }

void set_x(int16_t other){
                _x = other;
            };
void set_y(int16_t other){
                _y = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(4);
                     
            uint8_t* __x = (uint8_t*)&_x;

            std::copy(__x, __x + 2, data.begin() + X_OFFSET);

            uint8_t* __y = (uint8_t*)&_y;

            std::copy(__y, __y + 2, data.begin() + Y_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + X_OFFSET, data.begin() + X_OFFSET + 2, (uint8_t *)&_x);
        std::copy(data.begin() + Y_OFFSET, data.begin() + Y_OFFSET + 2, (uint8_t *)&_y);}
        

            
            
    };
} // namespace comm

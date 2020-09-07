#pragma once

#include "Robot_StateInterface.h"


namespace comm
{
    class Robot_State : public Robot_StateInterface
    {
        public:
            Robot_State() {

            }
            // Accessors
            uint8_t get_state(){
                return _state;
            }

void set_state(uint8_t other){
                _state = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(1);
                     
            uint8_t* __state = (uint8_t*)&_state;

            std::copy(__state, __state + 1, data.begin() + STATE_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + STATE_OFFSET, data.begin() + STATE_OFFSET + 1, (uint8_t *)&_state);}
        

            
            
    };
} // namespace comm

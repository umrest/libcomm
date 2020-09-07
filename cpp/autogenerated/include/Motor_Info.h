#pragma once

#include "Motor_InfoInterface.h"


namespace comm
{
    class Motor_Info : public Motor_InfoInterface
    {
        public:
            Motor_Info() {

            }
            // Accessors
            uint8_t get_can_id(){
                return _can_id;
            }
uint16_t get_current(){
                return _current;
            }
uint8_t get_percent(){
                return _percent;
            }
uint32_t get_position(){
                return _position;
            }
uint32_t get_velocity(){
                return _velocity;
            }

void set_can_id(uint8_t other){
                _can_id = other;
            };
void set_current(uint16_t other){
                _current = other;
            };
void set_percent(uint8_t other){
                _percent = other;
            };
void set_position(uint32_t other){
                _position = other;
            };
void set_velocity(uint32_t other){
                _velocity = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(16);
                     
            uint8_t* __can_id = (uint8_t*)&_can_id;

            std::copy(__can_id, __can_id + 1, data.begin() + CAN_ID_OFFSET);

            uint8_t* __current = (uint8_t*)&_current;

            std::copy(__current, __current + 2, data.begin() + CURRENT_OFFSET);

            uint8_t* __percent = (uint8_t*)&_percent;

            std::copy(__percent, __percent + 1, data.begin() + PERCENT_OFFSET);

            uint8_t* __position = (uint8_t*)&_position;

            std::copy(__position, __position + 4, data.begin() + POSITION_OFFSET);

            uint8_t* __velocity = (uint8_t*)&_velocity;

            std::copy(__velocity, __velocity + 4, data.begin() + VELOCITY_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        std::copy(data.begin() + CAN_ID_OFFSET, data.begin() + CAN_ID_OFFSET + 1, (uint8_t *)&_can_id);
        std::copy(data.begin() + CURRENT_OFFSET, data.begin() + CURRENT_OFFSET + 2, (uint8_t *)&_current);
        std::copy(data.begin() + PERCENT_OFFSET, data.begin() + PERCENT_OFFSET + 1, (uint8_t *)&_percent);
        std::copy(data.begin() + POSITION_OFFSET, data.begin() + POSITION_OFFSET + 4, (uint8_t *)&_position);
        std::copy(data.begin() + VELOCITY_OFFSET, data.begin() + VELOCITY_OFFSET + 4, (uint8_t *)&_velocity);}
        

            
            
    };
} // namespace comm

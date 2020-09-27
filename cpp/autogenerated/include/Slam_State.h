#pragma once

#include "Slam_StateInterface.h"


namespace comm
{
    class Slam_State : public Slam_StateInterface
    {
        public:
            Slam_State() {

            }
            // Accessors
            Field_Position get_field_position(){
                return _field_position;
            }

void set_field_position(Field_Position other){
                _field_position = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(120);
                     
            
            auto ___field_position = _field_position.Serialize();
            uint8_t* __field_position = (uint8_t*)&___field_position[0];

            std::copy(__field_position, __field_position + 6, data.begin() + FIELD_POSITION_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        
            std::vector<uint8_t> __field_position(6);
            std::copy(data.begin() + FIELD_POSITION_OFFSET, data.begin() + FIELD_POSITION_OFFSET + 6, __field_position.begin());
            _field_position.Deserialize(__field_position);}
        

            
            
    };
} // namespace comm

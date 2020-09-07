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
                return _tag0;
            }
Tag_Position get_tag1(){
                return _tag1;
            }
Field_Position get_field_position(){
                return _field_position;
            }
uint8_t get_vision_good(){
                return _vision_good;
            }

void set_tag0(Tag_Position other){
                _tag0 = other;
            };
void set_tag1(Tag_Position other){
                _tag1 = other;
            };
void set_field_position(Field_Position other){
                _field_position = other;
            };
void set_vision_good(uint8_t other){
                _vision_good = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(31);
                     
            
            auto ___tag0 = _tag0.Serialize();
            uint8_t* __tag0 = (uint8_t*)&___tag0[0];

            std::copy(__tag0, __tag0 + 12, data.begin() + TAG0_OFFSET);

            
            auto ___tag1 = _tag1.Serialize();
            uint8_t* __tag1 = (uint8_t*)&___tag1[0];

            std::copy(__tag1, __tag1 + 12, data.begin() + TAG1_OFFSET);

            
            auto ___field_position = _field_position.Serialize();
            uint8_t* __field_position = (uint8_t*)&___field_position[0];

            std::copy(__field_position, __field_position + 6, data.begin() + FIELD_POSITION_OFFSET);

            uint8_t* __vision_good = (uint8_t*)&_vision_good;

            std::copy(__vision_good, __vision_good + 1, data.begin() + VISION_GOOD_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        
            std::vector<uint8_t> __tag0(12);
            std::copy(data.begin() + TAG0_OFFSET, data.begin() + TAG0_OFFSET + 12, __tag0.begin());
            _tag0.Deserialize(__tag0);
        
            std::vector<uint8_t> __tag1(12);
            std::copy(data.begin() + TAG1_OFFSET, data.begin() + TAG1_OFFSET + 12, __tag1.begin());
            _tag1.Deserialize(__tag1);
        
            std::vector<uint8_t> __field_position(6);
            std::copy(data.begin() + FIELD_POSITION_OFFSET, data.begin() + FIELD_POSITION_OFFSET + 6, __field_position.begin());
            _field_position.Deserialize(__field_position);
        std::copy(data.begin() + VISION_GOOD_OFFSET, data.begin() + VISION_GOOD_OFFSET + 1, (uint8_t *)&_vision_good);}
        

            
            
    };
} // namespace comm

#pragma once

#include "VisionInterface.h"
#include "FieldPositionInterface.h"
#include "TagPositionInterface.h"


namespace comm
{
    class Vision : public VisionInterface
    {
        public:
            Vision() {

            }
            // Accessors
            
            TagPosition get_tag0(){
                return _tag0;
            }
            void set_tag0(TagPosition val){
                _tag0 = val;
            }
            
            TagPosition get_tag1(){
                return _tag1;
            }
            void set_tag1(TagPosition val){
                _tag1 = val;
            }
            
            FieldPosition get_field_position(){
                return _field_position;
            }
            void set_field_position(FieldPosition val){
                _field_position = val;
            }
            
            uint8_t get_vision_good(){
                return _vision_good;
            }
            void set_vision_good(uint8_t val){
                _vision_good = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(31);
                     
            std::vector<uint8_t> __tag0 = _tag0.Serialize();
                    uint8_t* ___tag0= &__tag0[0];
            std::copy(___tag0, ___tag0 + 12, data.begin() + tag0_OFFSET);
            
            std::vector<uint8_t> __tag1 = _tag1.Serialize();
                    uint8_t* ___tag1= &__tag1[0];
            std::copy(___tag1, ___tag1 + 12, data.begin() + tag1_OFFSET);
            
            std::vector<uint8_t> __field_position = _field_position.Serialize();
                    uint8_t* ___field_position= &__field_position[0];
            std::copy(___field_position, ___field_position + 6, data.begin() + field_position_OFFSET);
            
            
            uint8_t* ___vision_good = (uint8_t*)&_vision_good;
            
            std::copy(___vision_good, ___vision_good + 1, data.begin() + vision_good_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            new_data.clear();
            new_data.resize(12);
            std::copy(data.begin() + tag0_OFFSET, data.begin() + tag0_OFFSET + 12, new_data.begin());
            _tag0.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(12);
            std::copy(data.begin() + tag1_OFFSET, data.begin() + tag1_OFFSET + 12, new_data.begin());
            _tag1.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(6);
            std::copy(data.begin() + field_position_OFFSET, data.begin() + field_position_OFFSET + 6, new_data.begin());
            _field_position.Deserialize(new_data);
            
         
            std::copy(data.begin() + vision_good_OFFSET, data.begin() + vision_good_OFFSET + 1, (uint8_t *)&_vision_good);
            
                     }
                

            
            
    };
} // namespace comm

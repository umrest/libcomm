#pragma once

#include "Navigation_StateInterface.h"
#include "FieldPositionInterface.h"


namespace comm
{
    class Navigation_State : public Navigation_StateInterface
    {
        public:
            Navigation_State() {

            }
            // Accessors
            
            FieldPosition get_field_position(){
                return _field_position;
            }
            void set_field_position(FieldPosition val){
                _field_position = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(120);
                     
            std::vector<uint8_t> __field_position = _field_position.Serialize();
                    uint8_t* ___field_position= &__field_position[0];
            std::copy(___field_position, ___field_position + 6, data.begin() + field_position_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            new_data.clear();
            new_data.resize(6);
            std::copy(data.begin() + field_position_OFFSET, data.begin() + field_position_OFFSET + 6, new_data.begin());
            _field_position.Deserialize(new_data);
            
                     }
                

            
            
    };
} // namespace comm

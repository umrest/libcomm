#pragma once

#include "comm/VisionInterface.h"


namespace comm
{
    class Vision : public VisionInterface
    {
        public:
            Vision() {

            }
            // Accessors
             TagPosition _tag0(){ return tag0; }

 TagPosition _tag1(){ return tag1; }

 FieldPosition _field_position(){ return field_position; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(37);
            
            data[0] = 2;
            
            
                std::vector<uint8_t> tag0_data = tag0.Serialize();
                std::copy(tag0_data.begin(), tag0_data.begin() + 12, data.begin() + TAG0_OFFSET);
                

                std::vector<uint8_t> tag1_data = tag1.Serialize();
                std::copy(tag1_data.begin(), tag1_data.begin() + 12, data.begin() + TAG1_OFFSET);
                

                std::vector<uint8_t> field_position_data = field_position.Serialize();
                std::copy(field_position_data.begin(), field_position_data.begin() + 12, data.begin() + FIELD_POSITION_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::vector<uint8_t> tag0_data(data.begin() + TAG0_OFFSET, data.begin() + TAG0_OFFSET + 12);
                tag0.Deserialize(tag0_data);
                

                std::vector<uint8_t> tag1_data(data.begin() + TAG1_OFFSET, data.begin() + TAG1_OFFSET + 12);
                tag1.Deserialize(tag1_data);
                

                std::vector<uint8_t> field_position_data(data.begin() + FIELD_POSITION_OFFSET, data.begin() + FIELD_POSITION_OFFSET + 12);
                field_position.Deserialize(field_position_data);
                
 
        }
        

            
            
    };
} // namespace comm

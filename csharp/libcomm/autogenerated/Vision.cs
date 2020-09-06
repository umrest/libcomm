using System;

using comm;

namespace comm
{
    class Vision : VisionInterface
    {
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
byte get_vision_good(){
                return _vision_good;
            }

void set_tag0(Tag_Position other){
                _tag0 = other;
            }
void set_tag1(Tag_Position other){
                _tag1 = other;
            }
void set_field_position(Field_Position other){
                _field_position = other;
            }
void set_vision_good(byte other){
                _vision_good = other;
            }

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[31];
                     
            
            return _tag0.Serialize();
            
            return _tag1.Serialize();
            
            return _field_position.Serialize();
            
            byte[] ___vision_good = BitConverter.GetBytes(_vision_good);
            Array.Copy(___vision_good, 0, data, VISION_GOOD_OFFSET, 1);
            
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        
            byte[] __tag0[12];
            Array.Copy(data, TAG0_OFFSET, __tag0, 0, 12);
            _tag0.Deserialize(__tag0);
        
            byte[] __tag1[12];
            Array.Copy(data, TAG1_OFFSET, __tag1, 0, 12);
            _tag1.Deserialize(__tag1);
        
            byte[] __field_position[6];
            Array.Copy(data, FIELD_POSITION_OFFSET, __field_position, 0, 6);
            _field_position.Deserialize(__field_position);
        _vision_good = data[VISION_GOOD_OFFSET]}
        

            
            
    };
} // namespace comm

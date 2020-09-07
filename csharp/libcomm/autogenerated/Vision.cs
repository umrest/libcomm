using System;

using comm;

namespace comm
{
    public class Vision : VisionInterface
    {
            public Vision() {

            }
            // Accessors
            public Tag_Position get_tag0(){
                return _tag0;
            }
public Tag_Position get_tag1(){
                return _tag1;
            }
public Field_Position get_field_position(){
                return _field_position;
            }
public byte get_vision_good(){
                return _vision_good;
            }

public void set_tag0(Tag_Position other){
                _tag0 = other;
            }
public void set_tag1(Tag_Position other){
                _tag1 = other;
            }
public void set_field_position(Field_Position other){
                _field_position = other;
            }
public void set_vision_good(byte other){
                _vision_good = other;
            }

            
            // Serializers
            public byte[] Serialize() {
                     byte[] data = new byte[31];
                     
            
            byte[] ___tag0 = _tag0.Serialize();
            Array.Copy(___tag0, 0, data, TAG0_OFFSET, 12);
            
            byte[] ___tag1 = _tag1.Serialize();
            Array.Copy(___tag1, 0, data, TAG1_OFFSET, 12);
            
            byte[] ___field_position = _field_position.Serialize();
            Array.Copy(___field_position, 0, data, FIELD_POSITION_OFFSET, 6);
            
            byte[] ___vision_good = BitConverter.GetBytes(_vision_good);
            Array.Copy(___vision_good, 0, data, VISION_GOOD_OFFSET, 1);
        return data;
        }
        public void Deserialize(byte[] data)  {
        
            byte[] __tag0 = new byte[12];
            Array.Copy(data, TAG0_OFFSET, __tag0, 0, 12);
            _tag0.Deserialize(__tag0);
        
            byte[] __tag1 = new byte[12];
            Array.Copy(data, TAG1_OFFSET, __tag1, 0, 12);
            _tag1.Deserialize(__tag1);
        
            byte[] __field_position = new byte[6];
            Array.Copy(data, FIELD_POSITION_OFFSET, __field_position, 0, 6);
            _field_position.Deserialize(__field_position);
        _vision_good = data[VISION_GOOD_OFFSET];}
        

            
            
    };
} // namespace comm

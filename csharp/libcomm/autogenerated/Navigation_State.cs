using System;

using comm;

namespace comm
{
    public class Navigation_State : Navigation_StateInterface
    {
            public Navigation_State() {

            }
            // Accessors
            public Field_Position get_field_position(){
                return _field_position;
            }

public void set_field_position(Field_Position other){
                _field_position = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[120];
                     
            
            byte[] ___field_position = _field_position.Serialize();
            Array.Copy(___field_position, 0, data, FIELD_POSITION_OFFSET, 6);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        
            byte[] __field_position = new byte[6];
            Array.Copy(data, FIELD_POSITION_OFFSET, __field_position, 0, 6);
            _field_position.Deserialize(__field_position);}
        

            
            
    };
} // namespace comm

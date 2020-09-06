using System;

using comm;

namespace comm
{
    class Navigation_State : Navigation_StateInterface
    {
            Navigation_State() {

            }
            // Accessors
            Field_Position get_field_position(){
                return _field_position;
            }

void set_field_position(Field_Position other){
                _field_position = other;
            }

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[120];
                     
            
            return _field_position.Serialize();
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        
            byte[] __field_position[6];
            Array.Copy(data, FIELD_POSITION_OFFSET, __field_position, 0, 6);
            _field_position.Deserialize(__field_position);}
        

            
            
    };
} // namespace comm

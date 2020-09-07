using System;

using comm;

namespace comm
{
    public class Robot_State : Robot_StateInterface
    {
            public Robot_State() {

            }
            // Accessors
            public byte get_state(){
                return _state;
            }

public void set_state(byte other){
                _state = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[1];
                     
            
            byte[] ___state = BitConverter.GetBytes(_state);
            Array.Copy(___state, 0, data, STATE_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _state = data[STATE_OFFSET];}
        

            
            
    };
} // namespace comm

using System;

using comm;

namespace comm
{
    public class Hardware : HardwareInterface
    {
            public Hardware() {

            }
            // Accessors
            public byte get_angle(){
                return _angle;
            }

public void set_angle(byte other){
                _angle = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[8];
                     
            
            byte[] ___angle = BitConverter.GetBytes(_angle);
            Array.Copy(___angle, 0, data, ANGLE_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _angle = data[ANGLE_OFFSET];}
        

            
            
    };
} // namespace comm

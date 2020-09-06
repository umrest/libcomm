using System;

using comm;

namespace comm
{
    class Hardware : HardwareInterface
    {
            Hardware() {

            }
            // Accessors
            byte get_angle(){
                return _angle;
            }

void set_angle(byte other){
                _angle = other;
            }

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[8];
                     
            
            byte[] ___angle = BitConverter.GetBytes(_angle);
            Array.Copy(___angle, 0, data, ANGLE_OFFSET, 1);
            
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        _angle = data[ANGLE_OFFSET]}
        

            
            
    };
} // namespace comm

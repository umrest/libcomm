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
public byte get_r(){
                return _r;
            }
public byte get_g(){
                return _g;
            }
public byte get_b(){
                return _b;
            }

public void set_angle(byte other){
                _angle = other;
            }
public void set_r(byte other){
                _r = other;
            }
public void set_g(byte other){
                _g = other;
            }
public void set_b(byte other){
                _b = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[8];
                     
            
            byte[] ___angle = BitConverter.GetBytes(_angle);
            Array.Copy(___angle, 0, data, ANGLE_OFFSET, 1);
            
            byte[] ___r = BitConverter.GetBytes(_r);
            Array.Copy(___r, 0, data, R_OFFSET, 1);
            
            byte[] ___g = BitConverter.GetBytes(_g);
            Array.Copy(___g, 0, data, G_OFFSET, 1);
            
            byte[] ___b = BitConverter.GetBytes(_b);
            Array.Copy(___b, 0, data, B_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _angle = data[ANGLE_OFFSET];
        _r = data[R_OFFSET];
        _g = data[G_OFFSET];
        _b = data[B_OFFSET];}
        

            
            
    };
} // namespace comm

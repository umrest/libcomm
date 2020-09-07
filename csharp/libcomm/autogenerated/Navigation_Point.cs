using System;

using comm;

namespace comm
{
    public class Navigation_Point : Navigation_PointInterface
    {
            public Navigation_Point() {

            }
            // Accessors
            public Int16 get_x(){
                return _x;
            }
public Int16 get_y(){
                return _y;
            }

public void set_x(Int16 other){
                _x = other;
            }
public void set_y(Int16 other){
                _y = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[4];
                     
            
            byte[] ___x = BitConverter.GetBytes(_x);
            Array.Copy(___x, 0, data, X_OFFSET, 2);
            
            byte[] ___y = BitConverter.GetBytes(_y);
            Array.Copy(___y, 0, data, Y_OFFSET, 2);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _x = BitConverter.ToInt16(data, X_OFFSET);
        _y = BitConverter.ToInt16(data, Y_OFFSET);}
        

            
            
    };
} // namespace comm

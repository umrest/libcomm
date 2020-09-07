using System;

using comm;

namespace comm
{
    public class Field_Position : Field_PositionInterface
    {
            public Field_Position() {

            }
            // Accessors
            public double get_yaw(){
                return (double)(_yaw * 0.0027465827);
            }
public double get_x(){
                return (double)(_x * 0.1);
            }
public double get_y(){
                return (double)(_y * 0.1);
            }

public void set_yaw(double other){
                _yaw = (Int16)(other / 0.0027465827);
            }
public void set_x(double other){
                _x = (Int16)(other / 0.1);
            }
public void set_y(double other){
                _y = (Int16)(other / 0.1);
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[6];
                     
            
            byte[] ___yaw = BitConverter.GetBytes(_yaw);
            Array.Copy(___yaw, 0, data, YAW_OFFSET, 2);
            
            byte[] ___x = BitConverter.GetBytes(_x);
            Array.Copy(___x, 0, data, X_OFFSET, 2);
            
            byte[] ___y = BitConverter.GetBytes(_y);
            Array.Copy(___y, 0, data, Y_OFFSET, 2);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _yaw = BitConverter.ToInt16(data, YAW_OFFSET);
        _x = BitConverter.ToInt16(data, X_OFFSET);
        _y = BitConverter.ToInt16(data, Y_OFFSET);}
        

            
            
    };
} // namespace comm

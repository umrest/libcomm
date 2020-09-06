using System;

using comm;

namespace comm
{
    class Field_Position : Field_PositionInterface
    {
            Field_Position() {

            }
            // Accessors
            double get_yaw(){
                return (double)(_yaw / 0.0027465827);
            }
double get_x(){
                return (double)(_x / 0.1);
            }
double get_y(){
                return (double)(_y / 0.1);
            }

void set_yaw(double other){
                _yaw = (Int16)(other * 0.0027465827);
            }
void set_x(double other){
                _x = (Int16)(other * 0.1);
            }
void set_y(double other){
                _y = (Int16)(other * 0.1);
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
        BitConverter.ToInt16(data, YAW_OFFSET);
        BitConverter.ToInt16(data, X_OFFSET);
        BitConverter.ToInt16(data, Y_OFFSET);}
        

            
            
    };
} // namespace comm

using System;

using comm;

namespace comm
{
    class Tag_Position : Tag_PositionInterface
    {
            Tag_Position() {

            }
            // Accessors
            double get_yaw(){
                return (double)(_yaw / 0.0027465827);
            }
double get_pitch(){
                return (double)(_pitch / 0.0027465827);
            }
double get_roll(){
                return (double)(_roll / 0.0027465827);
            }
double get_x(){
                return (double)(_x / 0.1);
            }
double get_y(){
                return (double)(_y / 0.1);
            }
double get_z(){
                return (double)(_z / 0.1);
            }

void set_yaw(double other){
                _yaw = (int16)(other * 0.0027465827);
            }
void set_pitch(double other){
                _pitch = (int16)(other * 0.0027465827);
            }
void set_roll(double other){
                _roll = (int16)(other * 0.0027465827);
            }
void set_x(double other){
                _x = (int16)(other * 0.1);
            }
void set_y(double other){
                _y = (int16)(other * 0.1);
            }
void set_z(double other){
                _z = (int16)(other * 0.1);
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[12];
                     
            
            byte[] ___yaw = BitConverter.GetBytes(_yaw);
            Array.Copy(___yaw, 0, data, YAW_OFFSET, 2);
            
            byte[] ___pitch = BitConverter.GetBytes(_pitch);
            Array.Copy(___pitch, 0, data, PITCH_OFFSET, 2);
            
            byte[] ___roll = BitConverter.GetBytes(_roll);
            Array.Copy(___roll, 0, data, ROLL_OFFSET, 2);
            
            byte[] ___x = BitConverter.GetBytes(_x);
            Array.Copy(___x, 0, data, X_OFFSET, 2);
            
            byte[] ___y = BitConverter.GetBytes(_y);
            Array.Copy(___y, 0, data, Y_OFFSET, 2);
            
            byte[] ___z = BitConverter.GetBytes(_z);
            Array.Copy(___z, 0, data, Z_OFFSET, 2);
        return data;
        }
        public override void Deserialize(byte[] data)  {
         byte[] new_data;
        BitConverter.ToInt16(data, YAW_OFFSET);
        BitConverter.ToInt16(data, PITCH_OFFSET);
        BitConverter.ToInt16(data, ROLL_OFFSET);
        BitConverter.ToInt16(data, X_OFFSET);
        BitConverter.ToInt16(data, Y_OFFSET);
        BitConverter.ToInt16(data, Z_OFFSET);}
        

            
            
    };
} // namespace comm

using comm;

namespace comm
{
    class Tag_Position : Tag_PositionInterface
    {
        public:
            Tag_Position() {

            }
            // Accessors
            float get_yaw(){
                return _yaw / 0.0027465827;
            }
float get_pitch(){
                return _pitch / 0.0027465827;
            }
float get_roll(){
                return _roll / 0.0027465827;
            }
float get_x(){
                return _x / 0.1;
            }
float get_y(){
                return _y / 0.1;
            }
float get_z(){
                return _z / 0.1;
            }

void set_yaw(float other){
                _yaw = other * 0.0027465827;
            };
void set_pitch(float other){
                _pitch = other * 0.0027465827;
            };
void set_roll(float other){
                _roll = other * 0.0027465827;
            };
void set_x(float other){
                _x = other * 0.1;
            };
void set_y(float other){
                _y = other * 0.1;
            };
void set_z(float other){
                _z = other * 0.1;
            };

            
            // Serializers
            byte[] Serialize() {
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
        void Deserialize(byte[] data)  {
         byte[] new_data;
        BitConverter.ToInt16(data, YAW_OFFSET);
        BitConverter.ToInt16(data, PITCH_OFFSET);
        BitConverter.ToInt16(data, ROLL_OFFSET);
        BitConverter.ToInt16(data, X_OFFSET);
        BitConverter.ToInt16(data, Y_OFFSET);
        BitConverter.ToInt16(data, Z_OFFSET);}
        

            
            
    };
} // namespace comm

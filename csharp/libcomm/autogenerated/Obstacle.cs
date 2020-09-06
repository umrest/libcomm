using comm;

namespace comm
{
    class Obstacle : ObstacleInterface
    {
        public:
            Obstacle() {

            }
            // Accessors
            float get_x(){
                return _x / 0.1;
            }
float get_y(){
                return _y / 0.1;
            }
float get_width(){
                return _width / 0.1;
            }
float get_height(){
                return _height / 0.1;
            }

void set_x(float other){
                _x = other * 0.1;
            };
void set_y(float other){
                _y = other * 0.1;
            };
void set_width(float other){
                _width = other * 0.1;
            };
void set_height(float other){
                _height = other * 0.1;
            };

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[16];
                     
            
            byte[] ___x = BitConverter.GetBytes(_x);
            Array.Copy(___x, 0, data, X_OFFSET, 2);
            
            
            byte[] ___y = BitConverter.GetBytes(_y);
            Array.Copy(___y, 0, data, Y_OFFSET, 2);
            
            
            byte[] ___width = BitConverter.GetBytes(_width);
            Array.Copy(___width, 0, data, WIDTH_OFFSET, 2);
            
            
            byte[] ___height = BitConverter.GetBytes(_height);
            Array.Copy(___height, 0, data, HEIGHT_OFFSET, 2);
            
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        BitConverter.ToInt16(data, X_OFFSET);
        BitConverter.ToInt16(data, Y_OFFSET);
        BitConverter.ToInt16(data, WIDTH_OFFSET);
        BitConverter.ToInt16(data, HEIGHT_OFFSET);}
        

            
            
    };
} // namespace comm

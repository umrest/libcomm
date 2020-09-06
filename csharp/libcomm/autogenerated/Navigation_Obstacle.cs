using System;

using comm;

namespace comm
{
    class Navigation_Obstacle : Navigation_ObstacleInterface
    {
            Navigation_Obstacle() {

            }
            // Accessors
            public Int16 get_x(){
                return _x;
            }
public Int16 get_y(){
                return _y;
            }
public Int16 get_width(){
                return _width;
            }
public Int16 get_height(){
                return _height;
            }

public void set_x(Int16 other){
                _x = other;
            }
public void set_y(Int16 other){
                _y = other;
            }
public void set_width(Int16 other){
                _width = other;
            }
public void set_height(Int16 other){
                _height = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[8];
                     
            
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
        public override void Deserialize(byte[] data)  {
        BitConverter.ToInt16(data, X_OFFSET);
        BitConverter.ToInt16(data, Y_OFFSET);
        BitConverter.ToInt16(data, WIDTH_OFFSET);
        BitConverter.ToInt16(data, HEIGHT_OFFSET);}
        

            
            
    };
} // namespace comm

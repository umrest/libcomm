using System;

using comm;

namespace comm
{
    class Obstacle : ObstacleInterface
    {
            Obstacle() {

            }
            // Accessors
            public double get_x(){
                return (double)(_x / 0.1);
            }
public double get_y(){
                return (double)(_y / 0.1);
            }
public double get_width(){
                return (double)(_width / 0.1);
            }
public double get_height(){
                return (double)(_height / 0.1);
            }

public void set_x(double other){
                _x = (Int16)(other * 0.1);
            }
public void set_y(double other){
                _y = (Int16)(other * 0.1);
            }
public void set_width(double other){
                _width = (Int16)(other * 0.1);
            }
public void set_height(double other){
                _height = (Int16)(other * 0.1);
            }

            
            // Serializers
            public override byte[] Serialize() {
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
        public override void Deserialize(byte[] data)  {
        BitConverter.ToInt16(data, X_OFFSET);
        BitConverter.ToInt16(data, Y_OFFSET);
        BitConverter.ToInt16(data, WIDTH_OFFSET);
        BitConverter.ToInt16(data, HEIGHT_OFFSET);}
        

            
            
    };
} // namespace comm

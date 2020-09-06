using System;

using comm;

namespace comm
{
    class Navigation_Line : Navigation_LineInterface
    {
            Navigation_Line() {

            }
            // Accessors
            Int16 get_x_start(){
                return _x_start;
            }
Int16 get_y_start(){
                return _y_start;
            }
Int16 get_x_end(){
                return _x_end;
            }
Int16 get_y_end(){
                return _y_end;
            }

void set_x_start(Int16 other){
                _x_start = other;
            }
void set_y_start(Int16 other){
                _y_start = other;
            }
void set_x_end(Int16 other){
                _x_end = other;
            }
void set_y_end(Int16 other){
                _y_end = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[8];
                     
            
            byte[] ___x_start = BitConverter.GetBytes(_x_start);
            Array.Copy(___x_start, 0, data, X_START_OFFSET, 2);
            
            byte[] ___y_start = BitConverter.GetBytes(_y_start);
            Array.Copy(___y_start, 0, data, Y_START_OFFSET, 2);
            
            byte[] ___x_end = BitConverter.GetBytes(_x_end);
            Array.Copy(___x_end, 0, data, X_END_OFFSET, 2);
            
            byte[] ___y_end = BitConverter.GetBytes(_y_end);
            Array.Copy(___y_end, 0, data, Y_END_OFFSET, 2);
        return data;
        }
        public override void Deserialize(byte[] data)  {
         byte[] new_data;
        BitConverter.ToInt16(data, X_START_OFFSET);
        BitConverter.ToInt16(data, Y_START_OFFSET);
        BitConverter.ToInt16(data, X_END_OFFSET);
        BitConverter.ToInt16(data, Y_END_OFFSET);}
        

            
            
    };
} // namespace comm

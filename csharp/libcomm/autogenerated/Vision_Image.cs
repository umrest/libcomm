using System;

using comm;

namespace comm
{
    class Vision_Image : Vision_ImageInterface
    {
            Vision_Image() {

            }
            // Accessors
            byte[] get_image(){
                return _image;
            }

void set_image(byte[] other){
                _image = other;
            }

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[8191];
                     
            
            byte[] ___image = BitConverter.GetBytes(_image);
            Array.Copy(___image, 0, data, IMAGE_OFFSET, 8191);
            
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        BitConverter.Tobyte[](data, IMAGE_OFFSET);}
        

            
            
    };
} // namespace comm

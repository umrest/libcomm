using System;

using comm;

namespace comm
{
    class Vision_Image : Vision_ImageInterface
    {
            Vision_Image() {

            }
            // Accessors
            public byte[] get_image(){
                return _image;
            }

public void set_image(byte[] other){
                _image = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[8191];
                     
            
            byte[] ___image = BitConverter.GetBytes(_image);
            Array.Copy(___image, 0, data, IMAGE_OFFSET, 8191);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        BitConverter.Tobyte[](data, IMAGE_OFFSET);}
        

            
            
    };
} // namespace comm

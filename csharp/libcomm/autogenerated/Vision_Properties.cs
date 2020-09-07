using System;

using comm;

namespace comm
{
    public class Vision_Properties : Vision_PropertiesInterface
    {
            public Vision_Properties() {

            }
            // Accessors
            public UInt32 get_exposure(){
                return _exposure;
            }
public UInt32 get_gain(){
                return _gain;
            }

public void set_exposure(UInt32 other){
                _exposure = other;
            }
public void set_gain(UInt32 other){
                _gain = other;
            }

            
            // Serializers
            public byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___exposure = BitConverter.GetBytes(_exposure);
            Array.Copy(___exposure, 0, data, EXPOSURE_OFFSET, 4);
            
            byte[] ___gain = BitConverter.GetBytes(_gain);
            Array.Copy(___gain, 0, data, GAIN_OFFSET, 4);
        return data;
        }
        public void Deserialize(byte[] data)  {
        _exposure = BitConverter.ToUInt32(data, EXPOSURE_OFFSET);
        _gain = BitConverter.ToUInt32(data, GAIN_OFFSET);}
        

            
            
    };
} // namespace comm

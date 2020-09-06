using System;

using comm;

namespace comm
{
    public class Motor_Info : Motor_InfoInterface
    {
            public Motor_Info() {

            }
            // Accessors
            

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[16];
                     
        return data;
        }
        public override void Deserialize(byte[] data)  {}
        

            
            
    };
} // namespace comm

using System;

using comm;

namespace comm
{
    class Motor_Info : Motor_InfoInterface
    {
            Motor_Info() {

            }
            // Accessors
            

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[16];
                     
        return data;
        }
        public override void Deserialize(byte[] data)  {
         byte[] new_data;}
        

            
            
    };
} // namespace comm

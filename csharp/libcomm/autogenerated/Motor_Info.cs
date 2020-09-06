using comm;

namespace comm
{
    class Motor_Info : Motor_InfoInterface
    {
        public:
            Motor_Info() {

            }
            // Accessors
            

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[16];
                     
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;}
        

            
            
    };
} // namespace comm

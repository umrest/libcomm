using comm;

namespace comm
{
    class Data_Server : Data_ServerInterface
    {
        public:
            Data_Server() {

            }
            // Accessors
            BitArray8 get_connected_status(){
                return _connected_status;
            }

void set_connected_status(BitArray8 other){
                _connected_status = other;
            };

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            return _connected_status.Serialize();
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        
            byte[] __connected_status[1];
            Array.Copy(data, CONNECTED_STATUS_OFFSET, __connected_status, 0, 1);
            _connected_status.Deserialize(__connected_status);}
        

            
            
    };
} // namespace comm

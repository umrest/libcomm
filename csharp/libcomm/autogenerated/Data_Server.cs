using System;

using comm;

namespace comm
{
    class Data_Server : Data_ServerInterface
    {
            Data_Server() {

            }
            // Accessors
            BitArray8 get_connected_status(){
                return _connected_status;
            }

void set_connected_status(BitArray8 other){
                _connected_status = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___connected_status = _connected_status.Serialize();
            Array.Copy(___connected_status, 0, data, CONNECTED_STATUS_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        
            byte[] __connected_status = new byte[1];
            Array.Copy(data, CONNECTED_STATUS_OFFSET, __connected_status, 0, 1);
            _connected_status.Deserialize(__connected_status);}
        

            
            
    };
} // namespace comm

using comm;

namespace comm
{
    class Vision_Command : Vision_CommandInterface
    {
        public:
            Vision_Command() {

            }
            // Accessors
            byte get_command(){
                return _command;
            }

void set_command(byte other){
                _command = other;
            };

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___command = BitConverter.GetBytes(_command);
            Array.Copy(___command, 0, data, COMMAND_OFFSET, 1);
            
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        _command = data[COMMAND_OFFSET]}
        

            
            
    };
} // namespace comm

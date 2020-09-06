using System;

using comm;

namespace comm
{
    class Realsense_Command : Realsense_CommandInterface
    {
            Realsense_Command() {

            }
            // Accessors
            byte get_command(){
                return _command;
            }

void set_command(byte other){
                _command = other;
            }

            
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

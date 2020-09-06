using System;

using comm;

namespace comm
{
    public class Realsense_Command : Realsense_CommandInterface
    {
            public Realsense_Command() {

            }
            // Accessors
            public byte get_command(){
                return _command;
            }

public void set_command(byte other){
                _command = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___command = BitConverter.GetBytes(_command);
            Array.Copy(___command, 0, data, COMMAND_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _command = data[COMMAND_OFFSET];}
        

            
            
    };
} // namespace comm

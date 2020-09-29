using System;

using comm;

namespace comm
{
    public class Debug_Message : Debug_MessageInterface
    {
            public Debug_Message() {

            }
            // Accessors
            public byte get_identifier(){
                return _identifier;
            }
public byte[] get_message(){
                return _message;
            }

public void set_identifier(byte other){
                _identifier = other;
            }
public void set_message(byte[] other){
                _message = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[129];
                     
            
            byte[] ___identifier = BitConverter.GetBytes(_identifier);
            Array.Copy(___identifier, 0, data, IDENTIFIER_OFFSET, 1);
            byte[] ___message = _message;
            Array.Copy(___message, 0, data, MESSAGE_OFFSET, 128);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _identifier = data[IDENTIFIER_OFFSET];
        _message = new byte[128];
                    Array.Copy(data, MESSAGE_OFFSET, _message, 0, _message.Length);
                    }
        

            
            
    };
} // namespace comm

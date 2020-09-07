using System;

using comm;

namespace comm
{
    public class Identifier : IdentifierInterface
    {
            public Identifier() {

            }
            // Accessors
            public byte get_identifier(){
                return _identifier;
            }

public void set_identifier(byte other){
                _identifier = other;
            }

            
            // Serializers
            public byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___identifier = BitConverter.GetBytes(_identifier);
            Array.Copy(___identifier, 0, data, IDENTIFIER_OFFSET, 1);
        return data;
        }
        public void Deserialize(byte[] data)  {
        _identifier = data[IDENTIFIER_OFFSET];}
        

            
            
    };
} // namespace comm

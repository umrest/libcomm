using System;

using comm;

namespace comm
{
    class Identifier : IdentifierInterface
    {
            Identifier() {

            }
            // Accessors
            byte get_identifier(){
                return _identifier;
            }

void set_identifier(byte other){
                _identifier = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___identifier = BitConverter.GetBytes(_identifier);
            Array.Copy(___identifier, 0, data, IDENTIFIER_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
         byte[] new_data;
        _identifier = data[IDENTIFIER_OFFSET];}
        

            
            
    };
} // namespace comm

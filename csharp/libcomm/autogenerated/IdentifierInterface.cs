using comm;

namespace comm
{
class IdentifierInterface : RESTPacket{
    public IdentifierInterface()
    {

    }

           // Variables
    byte _identifier;


    // Offsets
    int IDENTIFIER_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.IDENTIFIER; }
    
};
} // namespace comm
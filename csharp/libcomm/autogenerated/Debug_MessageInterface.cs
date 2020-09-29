using System;

using comm;

namespace comm
{
public abstract class Debug_MessageInterface : RESTPacket{
    public Debug_MessageInterface()
    {

    }

           // Variables
    protected byte _identifier = new byte();
protected byte[] _message = new byte[128];


    // Offsets
    protected int IDENTIFIER_OFFSET = 0;
protected int MESSAGE_OFFSET = 1;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.DEBUG_MESSAGE; }
    
};
} // namespace comm
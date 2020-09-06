using System;

using comm;

namespace comm
{
public abstract class Vision_CommandInterface : RESTPacket{
    public Vision_CommandInterface()
    {

    }

           // Variables
    protected byte _command;


    // Offsets
    protected int COMMAND_OFFSET = 0;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_COMMAND; }
    
};
} // namespace comm
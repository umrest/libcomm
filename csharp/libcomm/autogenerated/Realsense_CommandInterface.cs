using System;

using comm;

namespace comm
{
public abstract class Realsense_CommandInterface : RESTPacket{
    public Realsense_CommandInterface()
    {

    }

           // Variables
    protected byte _command = new byte();


    // Offsets
    protected int COMMAND_OFFSET = 0;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.REALSENSE_COMMAND; }
    
};
} // namespace comm
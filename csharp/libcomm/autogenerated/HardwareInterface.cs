using System;

using comm;

namespace comm
{
public abstract class HardwareInterface : RESTPacket{
    public HardwareInterface()
    {

    }

           // Variables
    protected byte _angle = new byte();


    // Offsets
    protected int ANGLE_OFFSET = 0;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.HARDWARE; }
    
};
} // namespace comm
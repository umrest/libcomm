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
protected byte _r = new byte();
protected byte _g = new byte();
protected byte _b = new byte();


    // Offsets
    protected int ANGLE_OFFSET = 0;
protected int R_OFFSET = 1;
protected int G_OFFSET = 2;
protected int B_OFFSET = 3;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.HARDWARE; }
    
};
} // namespace comm
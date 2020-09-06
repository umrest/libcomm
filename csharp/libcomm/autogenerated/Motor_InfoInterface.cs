using System;

using comm;

namespace comm
{
public abstract class Motor_InfoInterface : RESTPacket{
    public Motor_InfoInterface()
    {

    }

           // Variables
    protected byte _can_id = new byte();
protected UInt16 _current = new UInt16();
protected byte _percent = new byte();
protected UInt32 _position = new UInt32();
protected UInt32 _velocity = new UInt32();


    // Offsets
    protected int CAN_ID_OFFSET = 0;
protected int CURRENT_OFFSET = 1;
protected int PERCENT_OFFSET = 3;
protected int POSITION_OFFSET = 4;
protected int VELOCITY_OFFSET = 8;


    // Type
    public override CommunicationDefinitions.TYPE type(){{ return 0; }}
    
};
} // namespace comm
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
protected Int16 _current = new Int16();
protected Int64 _position = new Int64();
protected Int32 _velocity = new Int32();
protected sbyte _percent = new sbyte();


    // Offsets
    protected int CAN_ID_OFFSET = 0;
protected int CURRENT_OFFSET = 1;
protected int POSITION_OFFSET = 3;
protected int VELOCITY_OFFSET = 11;
protected int PERCENT_OFFSET = 15;


    // Type
    public override CommunicationDefinitions.TYPE type(){{ return 0; }}
    
};
} // namespace comm
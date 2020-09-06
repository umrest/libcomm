using System;

using comm;

namespace comm
{
public abstract class Motor_InfoInterface : RESTPacket{
    public Motor_InfoInterface()
    {

    }

           // Variables
    protected byte _can_id;
protected UInt16 _current;
protected byte _percent;
protected UInt32 _position;
protected UInt32 _velocity;


    // Offsets
    protected int CAN_ID_OFFSET = 0;
protected int CURRENT_OFFSET = 1;
protected int PERCENT_OFFSET = 3;
protected int POSITION_OFFSET = 4;
protected int VELOCITY_OFFSET = 8;


    // Type
    
    
};
} // namespace comm
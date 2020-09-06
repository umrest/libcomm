using System;

using comm;

namespace comm
{
public abstract class Tag_PositionInterface : RESTPacket{
    public Tag_PositionInterface()
    {

    }

           // Variables
    protected Int16 _yaw;
protected Int16 _pitch;
protected Int16 _roll;
protected Int16 _x;
protected Int16 _y;
protected Int16 _z;


    // Offsets
    protected int YAW_OFFSET = 0;
protected int PITCH_OFFSET = 2;
protected int ROLL_OFFSET = 4;
protected int X_OFFSET = 6;
protected int Y_OFFSET = 8;
protected int Z_OFFSET = 10;


    // Type
    
    
};
} // namespace comm
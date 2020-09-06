using System;

using comm;

namespace comm
{
public abstract class Tag_PositionInterface : RESTPacket{
    public Tag_PositionInterface()
    {

    }

           // Variables
    protected Int16 _yaw = new Int16();
protected Int16 _pitch = new Int16();
protected Int16 _roll = new Int16();
protected Int16 _x = new Int16();
protected Int16 _y = new Int16();
protected Int16 _z = new Int16();


    // Offsets
    protected int YAW_OFFSET = 0;
protected int PITCH_OFFSET = 2;
protected int ROLL_OFFSET = 4;
protected int X_OFFSET = 6;
protected int Y_OFFSET = 8;
protected int Z_OFFSET = 10;


    // Type
    public override CommunicationDefinitions.TYPE type(){{ return 0; }}
    
};
} // namespace comm
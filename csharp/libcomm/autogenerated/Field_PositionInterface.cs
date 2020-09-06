using System;

using comm;

namespace comm
{
public abstract class Field_PositionInterface : RESTPacket{
    public Field_PositionInterface()
    {

    }

           // Variables
    protected Int16 _yaw = new Int16();
protected Int16 _x = new Int16();
protected Int16 _y = new Int16();


    // Offsets
    protected int YAW_OFFSET = 0;
protected int X_OFFSET = 2;
protected int Y_OFFSET = 4;


    // Type
    
    
};
} // namespace comm
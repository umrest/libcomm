using System;

using comm;

namespace comm
{
public abstract class Navigation_LineInterface : RESTPacket{
    public Navigation_LineInterface()
    {

    }

           // Variables
    protected Int16 _x_start = new Int16();
protected Int16 _y_start = new Int16();
protected Int16 _x_end = new Int16();
protected Int16 _y_end = new Int16();


    // Offsets
    protected int X_START_OFFSET = 0;
protected int Y_START_OFFSET = 2;
protected int X_END_OFFSET = 4;
protected int Y_END_OFFSET = 6;


    // Type
    
    
};
} // namespace comm
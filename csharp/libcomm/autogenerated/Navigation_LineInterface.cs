using System;

using comm;

namespace comm
{
abstract class Navigation_LineInterface : RESTPacket{
    public Navigation_LineInterface()
    {

    }

           // Variables
    protected Int16 _x_start;
protected Int16 _y_start;
protected Int16 _x_end;
protected Int16 _y_end;


    // Offsets
    protected int X_START_OFFSET = 0;
protected int Y_START_OFFSET = 2;
protected int X_END_OFFSET = 4;
protected int Y_END_OFFSET = 6;


    // Type
    
    
};
} // namespace comm
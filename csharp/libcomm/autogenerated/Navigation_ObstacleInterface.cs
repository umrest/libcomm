using System;

using comm;

namespace comm
{
public abstract class Navigation_ObstacleInterface : RESTPacket{
    public Navigation_ObstacleInterface()
    {

    }

           // Variables
    protected Int16 _x = new Int16();
protected Int16 _y = new Int16();
protected Int16 _width = new Int16();
protected Int16 _height = new Int16();


    // Offsets
    protected int X_OFFSET = 0;
protected int Y_OFFSET = 2;
protected int WIDTH_OFFSET = 4;
protected int HEIGHT_OFFSET = 6;


    // Type
    
    
};
} // namespace comm
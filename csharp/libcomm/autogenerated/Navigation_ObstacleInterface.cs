using comm;

namespace comm
{
abstract class Navigation_ObstacleInterface : RESTPacket{
    public Navigation_ObstacleInterface()
    {

    }

           // Variables
    protected Int16 _x;
protected Int16 _y;
protected Int16 _width;
protected Int16 _height;


    // Offsets
    protected int X_OFFSET = 0;
protected int Y_OFFSET = 2;
protected int WIDTH_OFFSET = 4;
protected int HEIGHT_OFFSET = 6;


    // Type
    
    
};
} // namespace comm
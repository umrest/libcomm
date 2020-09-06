using comm;

namespace comm
{
class Navigation_ObstacleInterface : RESTPacket{
    public Navigation_ObstacleInterface()
    {

    }

           // Variables
    Int16 _x;
Int16 _y;
Int16 _width;
Int16 _height;


    // Offsets
    int X_OFFSET = 0;
int Y_OFFSET = 2;
int WIDTH_OFFSET = 4;
int HEIGHT_OFFSET = 6;


    // Type
    
    
};
} // namespace comm
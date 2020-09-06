using comm;

namespace comm
{
class Navigation_LineInterface : RESTPacket{
    public Navigation_LineInterface()
    {

    }

           // Variables
    Int16 _x_start;
Int16 _y_start;
Int16 _x_end;
Int16 _y_end;


    // Offsets
    int X_START_OFFSET = 0;
int Y_START_OFFSET = 2;
int X_END_OFFSET = 4;
int Y_END_OFFSET = 6;


    // Type
    
    
};
} // namespace comm
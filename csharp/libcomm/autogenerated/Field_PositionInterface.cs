using comm;

namespace comm
{
class Field_PositionInterface : RESTPacket{
    public Field_PositionInterface()
    {

    }

           // Variables
    Int16 _yaw;
Int16 _x;
Int16 _y;


    // Offsets
    int YAW_OFFSET = 0;
int X_OFFSET = 2;
int Y_OFFSET = 4;


    // Type
    
    
};
} // namespace comm
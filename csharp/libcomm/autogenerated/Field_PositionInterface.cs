using comm;

namespace comm
{
class Field_PositionInterface : RESTPacket{
    public Field_PositionInterface()
    {

    }

           // Variables
    protected Int16 _yaw;
protected Int16 _x;
protected Int16 _y;


    // Offsets
    protected int YAW_OFFSET = 0;
protected int X_OFFSET = 2;
protected int Y_OFFSET = 4;


    // Type
    
    
};
} // namespace comm
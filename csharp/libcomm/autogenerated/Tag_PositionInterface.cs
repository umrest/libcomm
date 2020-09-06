using comm;

namespace comm
{
class Tag_PositionInterface : RESTPacket{
    public Tag_PositionInterface()
    {

    }

           // Variables
    Int16 _yaw;
Int16 _pitch;
Int16 _roll;
Int16 _x;
Int16 _y;
Int16 _z;


    // Offsets
    int YAW_OFFSET = 0;
int PITCH_OFFSET = 2;
int ROLL_OFFSET = 4;
int X_OFFSET = 6;
int Y_OFFSET = 8;
int Z_OFFSET = 10;


    // Type
    
    
};
} // namespace comm
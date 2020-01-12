namespace comm
{
    public abstract class TagPosition : RESTPacket
    {
        public TagPosition()
        {

        }

        // Variables
        public short _yaw;
public short _pitch;
public short _roll;
public short _x;
public short _y;
public short _z;



        // Offsets
        public static int YAW_OFFSET = 1;
public static int PITCH_OFFSET = 3;
public static int ROLL_OFFSET = 5;
public static int X_OFFSET = 7;
public static int Y_OFFSET = 9;
public static int Z_OFFSET = 11;


    }
}

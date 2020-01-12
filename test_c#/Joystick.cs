namespace comm
{
    public abstract class Joystick : RESTPacket
    {
        public Joystick()
        {

        }

        // Variables
        public BitArray8 _buttons_1;
public BitArray8 _buttons_2;
public sbyte _lj_x;
public sbyte _lj_y;
public sbyte _rj_x;
public sbyte _rj_y;
public sbyte _lt;
public sbyte _rt;



        // Offsets
        public static int BUTTONS_1_OFFSET = 1;
public static int BUTTONS_2_OFFSET = 2;
public static int LJ_X_OFFSET = 3;
public static int LJ_Y_OFFSET = 4;
public static int RJ_X_OFFSET = 5;
public static int RJ_Y_OFFSET = 6;
public static int LT_OFFSET = 7;
public static int RT_OFFSET = 8;


    }
}

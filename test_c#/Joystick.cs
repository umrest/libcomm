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
public byte _lj_x;



        // Offsets
        public static int BUTTONS_1_OFFSET = 1;
public static int BUTTONS_2_OFFSET = 2;
public static int LJ_X_OFFSET = 3;


    }
}

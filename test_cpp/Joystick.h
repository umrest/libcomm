namespace comm
{
    class Joystick : RESTPacket
    {
    public:
        Joystick()
        {

        }

        // Variables
         BitArray8 _buttons_1;
 BitArray8 _buttons_2;
 byte _lj_x;


    protected:
        // Offsets
        const int BUTTONS_1_OFFSET = 1;
const int BUTTONS_2_OFFSET = 2;
const int LJ_X_OFFSET = 3;


    }
}

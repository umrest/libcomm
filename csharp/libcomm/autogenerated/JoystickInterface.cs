using comm;

namespace comm
{
class JoystickInterface : RESTPacket{
    public JoystickInterface()
    {

    }

           // Variables
    protected BitArray8 _buttons_1;
protected BitArray8 _buttons_2;
protected sbyte _lj_x;
protected sbyte _lj_y;
protected sbyte _rj_x;
protected sbyte _rj_y;
protected sbyte _lt;
protected sbyte _rt;


    // Offsets
    protected int BUTTONS_1_OFFSET = 0;
protected int BUTTONS_2_OFFSET = 1;
protected int LJ_X_OFFSET = 2;
protected int LJ_Y_OFFSET = 3;
protected int RJ_X_OFFSET = 4;
protected int RJ_Y_OFFSET = 5;
protected int LT_OFFSET = 6;
protected int RT_OFFSET = 7;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.JOYSTICK; }
    
};
} // namespace comm
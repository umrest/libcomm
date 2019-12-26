namespace comm
{
    public abstract class Dashboard : RESTPacket
    {
        public Dashboard()
        {

        }

        // Variables
        public byte _enabled_1;
public byte _enabled_2;
public byte _enabled_3;
public byte _enabled_4;
public byte _enabled_5;
public byte _enabled_6;
public byte _enabled_7;
public byte _enabled_8;
public byte _state;



        // Offsets
        public static int ENABLED_1_OFFSET = 1;
public static int ENABLED_2_OFFSET = 2;
public static int ENABLED_3_OFFSET = 3;
public static int ENABLED_4_OFFSET = 4;
public static int ENABLED_5_OFFSET = 5;
public static int ENABLED_6_OFFSET = 6;
public static int ENABLED_7_OFFSET = 7;
public static int ENABLED_8_OFFSET = 8;
public static int STATE_OFFSET = 9;


    }
}

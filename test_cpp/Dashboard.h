namespace comm
{
    class Dashboard : RESTPacket
    {
    public:
        Dashboard()
        {

        }

        // Variables
         byte _enabled_1;
 byte _enabled_2;
 byte _enabled_3;
 byte _enabled_4;
 byte _enabled_5;
 byte _enabled_6;
 byte _enabled_7;
 byte _enabled_8;
 byte _state;


    protected:
        // Offsets
        const int ENABLED_1_OFFSET = 1;
const int ENABLED_2_OFFSET = 2;
const int ENABLED_3_OFFSET = 3;
const int ENABLED_4_OFFSET = 4;
const int ENABLED_5_OFFSET = 5;
const int ENABLED_6_OFFSET = 6;
const int ENABLED_7_OFFSET = 7;
const int ENABLED_8_OFFSET = 8;
const int STATE_OFFSET = 9;


    }
}

using comm;

namespace comm
{
class DashboardInterface : RESTPacket{
    public DashboardInterface()
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


    // Offsets
    int ENABLED_1_OFFSET = 0;
int ENABLED_2_OFFSET = 1;
int ENABLED_3_OFFSET = 2;
int ENABLED_4_OFFSET = 3;
int ENABLED_5_OFFSET = 4;
int ENABLED_6_OFFSET = 5;
int ENABLED_7_OFFSET = 6;
int ENABLED_8_OFFSET = 7;
int STATE_OFFSET = 8;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.DASHBOARD; }
    
};
} // namespace comm
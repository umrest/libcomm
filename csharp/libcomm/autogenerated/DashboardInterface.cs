using comm;

namespace comm
{
abstract class DashboardInterface : RESTPacket{
    public DashboardInterface()
    {

    }

           // Variables
    protected byte _enabled_1;
protected byte _enabled_2;
protected byte _enabled_3;
protected byte _enabled_4;
protected byte _enabled_5;
protected byte _enabled_6;
protected byte _enabled_7;
protected byte _enabled_8;
protected byte _state;


    // Offsets
    protected int ENABLED_1_OFFSET = 0;
protected int ENABLED_2_OFFSET = 1;
protected int ENABLED_3_OFFSET = 2;
protected int ENABLED_4_OFFSET = 3;
protected int ENABLED_5_OFFSET = 4;
protected int ENABLED_6_OFFSET = 5;
protected int ENABLED_7_OFFSET = 6;
protected int ENABLED_8_OFFSET = 7;
protected int STATE_OFFSET = 8;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.DASHBOARD; }
    
};
} // namespace comm
using comm;

namespace comm
{
abstract class Data_ServerInterface : RESTPacket{
    public Data_ServerInterface()
    {

    }

           // Variables
    protected BitArray8 _connected_status;


    // Offsets
    protected int CONNECTED_STATUS_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.DATA_SERVER; }
    
};
} // namespace comm
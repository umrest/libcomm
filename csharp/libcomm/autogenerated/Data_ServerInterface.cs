using comm;

namespace comm
{
class Data_ServerInterface : RESTPacket{
    public Data_ServerInterface()
    {

    }

           // Variables
    BitArray8 _connected_status;


    // Offsets
    int CONNECTED_STATUS_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.DATA_SERVER; }
    
};
} // namespace comm
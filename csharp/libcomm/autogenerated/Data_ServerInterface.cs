using System;

using comm;

namespace comm
{
public abstract class Data_ServerInterface : RESTPacket{
    public Data_ServerInterface()
    {

    }

           // Variables
    protected BitArray8 _connected_status = new BitArray8();


    // Offsets
    protected int CONNECTED_STATUS_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.DATA_SERVER; }
    
};
} // namespace comm
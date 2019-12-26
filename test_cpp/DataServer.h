namespace comm
{
    class DataServer : RESTPacket
    {
    public:
        DataServer()
        {

        }

        // Variables
         BitArray8 _connected_status;


    protected:
        // Offsets
        const int CONNECTED_STATUS_OFFSET = 1;


    }
}

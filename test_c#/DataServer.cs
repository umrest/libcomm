namespace comm
{
    public abstract class DataServer : RESTPacket
    {
        public DataServer()
        {

        }

        // Variables
        public BitArray8 _connected_status;



        // Offsets
        public static int CONNECTED_STATUS_OFFSET = 1;


    }
}

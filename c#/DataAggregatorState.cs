namespace comm
{
    public abstract class DataAggregatorState : RESTPacket
    {
        public DataAggregatorState()
        {

        }

        public bool hero_connected;
        public bool vision_connected;


        // Offsets
        
        protected const int STATUS_OFFSET = 1;

    }
}

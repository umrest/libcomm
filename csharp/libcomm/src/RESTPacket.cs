namespace comm
{
    public abstract class RESTPacket
    {
        public abstract byte[] Serialize();
        public abstract void Deserialize(byte[] data);

        public abstract CommunicationDefinitions.TYPE type();
    }
}

namespace comm
{
    public interface RESTPacket
    {
        byte[] Serialize();
        void Deserialize(byte[] data);

        CommunicationDefinitions.TYPE type();
    }
}

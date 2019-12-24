namespace comm
{
    public abstract class RESTPacket
    {
        public byte TYPE = 0;

        public abstract byte[] Serialize();
        public abstract void Deserialize(byte[] data);

        protected const int TYPE_OFFSET = 0;
    }
}

namespace comm
{
    public abstract class Identifier : RESTPacket
    {
        public Identifier()
        {

        }

        // Variables
        public byte _identifier;



        // Offsets
        public static int IDENTIFIER_OFFSET = 1;


    }
}

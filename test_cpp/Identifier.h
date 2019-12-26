namespace comm
{
    class Identifier : RESTPacket
    {
    public:
        Identifier()
        {

        }

        // Variables
         byte _identifier;


    protected:
        // Offsets
        const int IDENTIFIER_OFFSET = 1;


    }
}

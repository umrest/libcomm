namespace comm
{
    class Vision : RESTPacket
    {
    public:
        Vision()
        {

        }

        // Variables
         TagPosition _tag0;
 TagPosition _tag1;


    protected:
        // Offsets
        const int TAG0_OFFSET = 1;
const int TAG1_OFFSET = 13;


    }
}

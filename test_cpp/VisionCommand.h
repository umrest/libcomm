namespace comm
{
    class VisionCommand : RESTPacket
    {
    public:
        VisionCommand()
        {

        }

        // Variables
         byte _command;


    protected:
        // Offsets
        const int COMMAND_OFFSET = 1;


    }
}

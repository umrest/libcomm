namespace comm
{
    public abstract class VisionCommand : RESTPacket
    {
        public VisionCommand()
        {

        }

        // Variables
        public byte _command;



        // Offsets
        public static int COMMAND_OFFSET = 1;


    }
}

using comm;

namespace comm
{
class Vision_CommandInterface : RESTPacket{
    public Vision_CommandInterface()
    {

    }

           // Variables
    protected byte _command;


    // Offsets
    protected int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_COMMAND; }
    
};
} // namespace comm
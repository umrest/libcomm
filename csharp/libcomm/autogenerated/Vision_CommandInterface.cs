using comm;

namespace comm
{
class Vision_CommandInterface : RESTPacket{
    public Vision_CommandInterface()
    {

    }

           // Variables
    byte _command;


    // Offsets
    int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_COMMAND; }
    
};
} // namespace comm
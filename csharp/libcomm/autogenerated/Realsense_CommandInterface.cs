using comm;

namespace comm
{
class Realsense_CommandInterface : RESTPacket{
    public Realsense_CommandInterface()
    {

    }

           // Variables
    byte _command;


    // Offsets
    int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.REALSENSE_COMMAND; }
    
};
} // namespace comm
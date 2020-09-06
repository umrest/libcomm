using comm;

namespace comm
{
abstract class Vision_PropertiesInterface : RESTPacket{
    public Vision_PropertiesInterface()
    {

    }

           // Variables
    protected byte _command;


    // Offsets
    protected int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_PROPERTIES; }
    
};
} // namespace comm
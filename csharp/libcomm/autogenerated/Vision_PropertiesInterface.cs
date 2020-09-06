using comm;

namespace comm
{
class Vision_PropertiesInterface : RESTPacket{
    public Vision_PropertiesInterface()
    {

    }

           // Variables
    byte _command;


    // Offsets
    int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_PROPERTIES; }
    
};
} // namespace comm
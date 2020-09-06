using comm;

namespace comm
{
class HardwareInterface : RESTPacket{
    public HardwareInterface()
    {

    }

           // Variables
    byte _angle;


    // Offsets
    int ANGLE_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.HARDWARE; }
    
};
} // namespace comm
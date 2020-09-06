using comm;

namespace comm
{
class HardwareInterface : RESTPacket{
    public HardwareInterface()
    {

    }

           // Variables
    protected byte _angle;


    // Offsets
    protected int ANGLE_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.HARDWARE; }
    
};
} // namespace comm
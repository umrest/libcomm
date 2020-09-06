using comm;

namespace comm
{
abstract class Vision_ImageInterface : RESTPacket{
    public Vision_ImageInterface()
    {

    }

           // Variables
    protected byte[] _image;


    // Offsets
    protected int IMAGE_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_IMAGE; }
    
};
} // namespace comm
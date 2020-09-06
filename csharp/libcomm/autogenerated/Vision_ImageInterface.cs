using comm;

namespace comm
{
class Vision_ImageInterface : RESTPacket{
    public Vision_ImageInterface()
    {

    }

           // Variables
    byte[] _image;


    // Offsets
    int IMAGE_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_IMAGE; }
    
};
} // namespace comm
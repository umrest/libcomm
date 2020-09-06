using System;

using comm;

namespace comm
{
public abstract class Vision_ImageInterface : RESTPacket{
    public Vision_ImageInterface()
    {

    }

           // Variables
    protected byte[] _image = new byte[8191];


    // Offsets
    protected int IMAGE_OFFSET = 0;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_IMAGE; }
    
};
} // namespace comm
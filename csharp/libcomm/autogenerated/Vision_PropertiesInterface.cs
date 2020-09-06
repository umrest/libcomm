using System;

using comm;

namespace comm
{
public abstract class Vision_PropertiesInterface : RESTPacket{
    public Vision_PropertiesInterface()
    {

    }

           // Variables
    protected UInt32 _exposure = new UInt32();
protected UInt32 _gain = new UInt32();


    // Offsets
    protected int EXPOSURE_OFFSET = 0;
protected int GAIN_OFFSET = 4;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION_PROPERTIES; }
    
};
} // namespace comm
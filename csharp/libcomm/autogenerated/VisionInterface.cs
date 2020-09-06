using System;

using comm;

namespace comm
{
public abstract class VisionInterface : RESTPacket{
    public VisionInterface()
    {

    }

           // Variables
    protected Tag_Position _tag0;
protected Tag_Position _tag1;
protected Field_Position _field_position;
protected byte _vision_good;


    // Offsets
    protected int TAG0_OFFSET = 0;
protected int TAG1_OFFSET = 12;
protected int FIELD_POSITION_OFFSET = 24;
protected int VISION_GOOD_OFFSET = 30;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION; }
    
};
} // namespace comm
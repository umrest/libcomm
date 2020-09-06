using comm;

namespace comm
{
class VisionInterface : RESTPacket{
    public VisionInterface()
    {

    }

           // Variables
    Tag_Position _tag0;
Tag_Position _tag1;
Field_Position _field_position;
byte _vision_good;


    // Offsets
    int TAG0_OFFSET = 0;
int TAG1_OFFSET = 12;
int FIELD_POSITION_OFFSET = 24;
int VISION_GOOD_OFFSET = 30;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.VISION; }
    
};
} // namespace comm
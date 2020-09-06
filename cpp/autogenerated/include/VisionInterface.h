#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Tag_Position.h"
#include "Field_Position.h"


namespace comm
{
class VisionInterface : public RESTPacket{
    public :
        VisionInterface()
    {

    }
    // Variables
    Tag_Position _tag0;
Tag_Position _tag1;
Field_Position _field_position;
uint8_t _vision_good;


    // Offsets
    int TAG0_OFFSET = 0;
int TAG1_OFFSET = 12;
int FIELD_POSITION_OFFSET = 24;
int VISION_GOOD_OFFSET = 30;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION; }
};
} // namespace comm

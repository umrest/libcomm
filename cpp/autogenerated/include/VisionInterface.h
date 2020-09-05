#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Vision.h"
#include "FieldPosition.h"
#include "TagPosition.h"


namespace comm
{
class VisionInterface : public RESTPacket{
    public :
        VisionInterface()
    {

    }
    // Variables
    TagPosition _tag0;TagPosition _tag1;FieldPosition _field_position;uint8_t _vision_good;

    // Offsets
    int tag0_OFFSET = 0;
            int tag1_OFFSET = 12;
            int field_position_OFFSET = 24;
            int vision_good_OFFSET = 30;
            int SIZE = 31;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION; }
            
};
} // namespace comm

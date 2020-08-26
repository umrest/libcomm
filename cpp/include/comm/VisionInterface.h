#pragma once

// Requirements
#include "comm/Types.hpp"

namespace comm
{
class VisionInterface : public RestPacket{
    public :
        VisionInterface()
    {

    }
    // Variables
     TagPosition tag0;
 TagPosition tag1;
 FieldPosition field_position;
 uint8_t vision_good;


    // Offsets
    const int TAG0_OFFSET = 1;

const int TAG1_OFFSET = 13;

const int FIELD_POSITION_OFFSET = 25;

const int VISION_GOOD_OFFSET = 31;


};
} // namespace comm

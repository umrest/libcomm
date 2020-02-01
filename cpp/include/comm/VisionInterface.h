#pragma once

#include "comm/FieldPosition.h"
#include "comm/TagPosition.h"

#include "comm/Types.hpp"

namespace comm
{
    class VisionInterface : RestPacket
    {
        public:
            VisionInterface() {

            }
            // Variables
             TagPosition tag0;
 TagPosition tag1;
 FieldPosition field_position;


            // Offsets
            const int TAG0_OFFSET = 1;

const int TAG1_OFFSET = 13;

const int FIELD_POSITION_OFFSET = 25;


    };
} // namespace comm

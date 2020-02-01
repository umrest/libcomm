#pragma once

#include <stdint.h>
#include "Types.hpp"

namespace comm
{
    class VisionInterface : RESTPacket
    {
        public:
            VisionInterface() {

            }
            virtual void Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             TagPosition _tag0;
 TagPosition _tag1;


        protected :
            // Offsets
            const int TAG0_OFFSET = 1;
const int TAG1_OFFSET = 13;

    };
} // namespace comm

#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class VisionInterface
    {
        public:
            VisionInterface() {

            }
            virtual std::array<char*, 127> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             TagPosition _tag0;
 TagPosition _tag1;
 FieldPosition _field_position;


        protected :
            // Offsets
            const int TAG0_OFFSET = 1;

const int TAG1_OFFSET = 13;

const int FIELD_POSITION_OFFSET = 25;


    };
} // namespace comm

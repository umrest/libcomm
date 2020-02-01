#pragma once

#include <stdint.h>
#include "Types.hpp"

namespace comm
{
    class DashboardInterface : RESTPacket
    {
        public:
            DashboardInterface() {

            }
            virtual void Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             uint8_t _enabled_1;
 uint8_t _enabled_2;
 uint8_t _enabled_3;
 uint8_t _enabled_4;
 uint8_t _enabled_5;
 uint8_t _enabled_6;
 uint8_t _enabled_7;
 uint8_t _enabled_8;
 uint8_t _state;


        protected :
            // Offsets
            const int ENABLED_1_OFFSET = 1;
const int ENABLED_2_OFFSET = 2;
const int ENABLED_3_OFFSET = 3;
const int ENABLED_4_OFFSET = 4;
const int ENABLED_5_OFFSET = 5;
const int ENABLED_6_OFFSET = 6;
const int ENABLED_7_OFFSET = 7;
const int ENABLED_8_OFFSET = 8;
const int STATE_OFFSET = 9;

    };
} // namespace comm

#pragma once


#include "comm/Types.hpp"

namespace comm
{
    class DashboardInterface : RestPacket
    {
        public:
            DashboardInterface() {

            }
            // Variables
             uint8_t enabled_1;
 uint8_t enabled_2;
 uint8_t enabled_3;
 uint8_t enabled_4;
 uint8_t enabled_5;
 uint8_t enabled_6;
 uint8_t enabled_7;
 uint8_t enabled_8;
 uint8_t state;


            // Offsets
            const int ENABLED_1_OFFSET = 0;

const int ENABLED_2_OFFSET = 1;

const int ENABLED_3_OFFSET = 2;

const int ENABLED_4_OFFSET = 3;

const int ENABLED_5_OFFSET = 4;

const int ENABLED_6_OFFSET = 5;

const int ENABLED_7_OFFSET = 6;

const int ENABLED_8_OFFSET = 7;

const int STATE_OFFSET = 8;


    };
} // namespace comm

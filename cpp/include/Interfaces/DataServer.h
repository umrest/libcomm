#pragma once

#include "Implementation/BitArray8.h"

#include "Types.hpp"

namespace comm
{
    class DataServerInterface : RestPacket
    {
        public:
            DataServerInterface() {

            }
            // Variables
             BitArray8 connected_status;


            // Offsets
            const int CONNECTED_STATUS_OFFSET = 1;


    };
} // namespace comm

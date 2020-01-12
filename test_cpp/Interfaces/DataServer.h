#pragma once

#include <stdint.h>
#include "Types.hpp"

namespace comm
{
    class DataServerInterface : RESTPacket
    {
        public:
            DataServerInterface() {

            }
            virtual void Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             BitArray8 _connected_status;


        protected :
            // Offsets
            const int CONNECTED_STATUS_OFFSET = 1;

    };
} // namespace comm

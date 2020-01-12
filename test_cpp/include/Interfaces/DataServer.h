#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class DataServerInterface
    {
        public:
            DataServerInterface() {

            }
            virtual std::array<char*, 127> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             BitArray8 _connected_status;


        protected :
            // Offsets
            const int CONNECTED_STATUS_OFFSET = 1;


    };
} // namespace comm

#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class DataServer : DataServerInterface
    {
        public:
            DataServer() {

            }

            // Accessors
             BitArray8 connected_status(){ return _connected_status };

    };
} // namespace comm

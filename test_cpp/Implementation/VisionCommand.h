#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class VisionCommand : VisionCommandInterface
    {
        public:
            VisionCommand() {

            }

            // Accessors
             uint8_t command(){ return _command };

    };
} // namespace comm

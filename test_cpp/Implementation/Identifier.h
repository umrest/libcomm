#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Identifier : IdentifierInterface
    {
        public:
            Identifier() {

            }

            // Accessors
             uint8_t identifier(){ return _identifier };

    };
} // namespace comm

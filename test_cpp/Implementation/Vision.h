#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Vision : VisionInterface
    {
        public:
            Vision() {

            }

            // Accessors
             TagPosition tag0(){ return _tag0 };
 TagPosition tag1(){ return _tag1 };

    };
} // namespace comm

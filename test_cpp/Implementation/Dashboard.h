#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Dashboard : DashboardInterface
    {
        public:
            Dashboard() {

            }

            // Accessors
             uint8_t enabled_1(){ return _enabled_1 };
 uint8_t enabled_2(){ return _enabled_2 };
 uint8_t enabled_3(){ return _enabled_3 };
 uint8_t enabled_4(){ return _enabled_4 };
 uint8_t enabled_5(){ return _enabled_5 };
 uint8_t enabled_6(){ return _enabled_6 };
 uint8_t enabled_7(){ return _enabled_7 };
 uint8_t enabled_8(){ return _enabled_8 };
 uint8_t state(){ return _state };

    };
} // namespace comm

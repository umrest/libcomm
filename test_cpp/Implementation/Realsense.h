#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class Realsense : RealsenseInterface
    {
        public:
            Realsense() {

            }

            // Accessors
             Obstacle obstacle_1(){ return _obstacle_1 };
 Obstacle obstacle_2(){ return _obstacle_2 };
 Obstacle obstacle_3(){ return _obstacle_3 };
 Obstacle obstacle_4(){ return _obstacle_4 };

    };
} // namespace comm

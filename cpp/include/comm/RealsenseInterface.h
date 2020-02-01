#pragma once

#include "comm/Obstacle.h"

#include "comm/Types.hpp"

namespace comm
{
    class RealsenseInterface : RestPacket
    {
        public:
            RealsenseInterface() {

            }
            // Variables
             Obstacle obstacle_1;
 Obstacle obstacle_2;
 Obstacle obstacle_3;
 Obstacle obstacle_4;


            // Offsets
            const int OBSTACLE_1_OFFSET = 1;

const int OBSTACLE_2_OFFSET = 17;

const int OBSTACLE_3_OFFSET = 33;

const int OBSTACLE_4_OFFSET = 49;


    };
} // namespace comm

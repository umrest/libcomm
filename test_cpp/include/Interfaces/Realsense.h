﻿#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class RealsenseInterface
    {
        public:
            RealsenseInterface() {

            }
            virtual std::array<char*, 127> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             Obstacle _obstacle_1;
 Obstacle _obstacle_2;
 Obstacle _obstacle_3;
 Obstacle _obstacle_4;


        protected :
            // Offsets
            const int OBSTACLE_1_OFFSET = 1;

const int OBSTACLE_2_OFFSET = 17;

const int OBSTACLE_3_OFFSET = 33;

const int OBSTACLE_4_OFFSET = 49;


    };
} // namespace comm
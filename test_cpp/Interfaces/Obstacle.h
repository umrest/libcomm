#pragma once

#include <stdint.h>
#include "Types.hpp"

namespace comm
{
    class ObstacleInterface : RESTPacket
    {
        public:
            ObstacleInterface() {

            }
            virtual void Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
            

        protected :
            // Offsets
            
    };
} // namespace comm

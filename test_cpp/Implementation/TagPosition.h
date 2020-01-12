#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class TagPosition : TagPositionInterface
    {
        public:
            TagPosition() {

            }

            // Accessors
             float yaw(){ return _yaw*.01 };
 float pitch(){ return _pitch*.01 };
 float roll(){ return _roll*.01 };
 float x(){ return _x*.01 };
 float y(){ return _y*.01 };
 float z(){ return _z*.01 };

    };
} // namespace comm

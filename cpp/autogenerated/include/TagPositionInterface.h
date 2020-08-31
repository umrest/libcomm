#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "TagPosition.h"


namespace comm
{
class TagPositionInterface : public RESTPacket{
    public :
        TagPositionInterface()
    {

    }
    // Variables
    int16_t _yaw;int16_t _pitch;int16_t _roll;int16_t _x;int16_t _y;int16_t _z;

    // Offsets
    int yaw_OFFSET = 0;
            int pitch_OFFSET = 2;
            int roll_OFFSET = 4;
            int x_OFFSET = 6;
            int y_OFFSET = 8;
            int z_OFFSET = 10;
            int SIZE = 12;

    // Type
    
};
} // namespace comm

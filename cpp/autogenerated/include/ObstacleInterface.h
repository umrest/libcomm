#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Obstacle.h"


namespace comm
{
class ObstacleInterface : public RESTPacket{
    public :
        ObstacleInterface()
    {

    }
    // Variables
    int16_t _x;int16_t _y;int16_t _width;int16_t _height;

    // Offsets
    int x_OFFSET = 0;
            int y_OFFSET = 2;
            int width_OFFSET = 4;
            int height_OFFSET = 6;
            int SIZE = 16;

    // Type
    
};
} // namespace comm

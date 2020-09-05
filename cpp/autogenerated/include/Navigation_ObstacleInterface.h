#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Navigation_Obstacle.h"


namespace comm
{
class Navigation_ObstacleInterface : public RESTPacket{
    public :
        Navigation_ObstacleInterface()
    {

    }
    // Variables
    int16_t _x;int16_t _y;int16_t _width;int16_t _height;

    // Offsets
    int x_OFFSET = 0;
            int y_OFFSET = 2;
            int width_OFFSET = 4;
            int height_OFFSET = 6;
            int SIZE = 8;

    // Type
    
};
} // namespace comm

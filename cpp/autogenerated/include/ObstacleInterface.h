#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class ObstacleInterface : public RESTPacket{
    public :
        ObstacleInterface()
    {

    }
    // Variables
    int16_t _x;
int16_t _y;
int16_t _width;
int16_t _height;


    // Offsets
    int X_OFFSET = 0;
int Y_OFFSET = 2;
int WIDTH_OFFSET = 4;
int HEIGHT_OFFSET = 6;


    // Type
    
};
} // namespace comm

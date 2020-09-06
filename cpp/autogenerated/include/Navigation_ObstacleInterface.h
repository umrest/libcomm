#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Navigation_ObstacleInterface : public RESTPacket{
    public :
        Navigation_ObstacleInterface()
    {

    }
    // Variables
    int16 _x;
int16 _y;
int16 _width;
int16 _height;


    // Offsets
    int X_OFFSET = 0;
int Y_OFFSET = 2;
int WIDTH_OFFSET = 4;
int HEIGHT_OFFSET = 6;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_OBSTACLE; }
};
} // namespace comm

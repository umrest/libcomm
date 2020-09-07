#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Navigation_PointInterface : public RESTPacket{
    public :
        Navigation_PointInterface()
    {

    }
    // Variables
    int16_t _x;
int16_t _y;


    // Offsets
    int X_OFFSET = 0;
int Y_OFFSET = 2;


    // Type
    
};
} // namespace comm

#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class Field_PositionInterface : public RESTPacket{
    public :
        Field_PositionInterface()
    {

    }
    // Variables
    int16_t _yaw;
int16_t _x;
int16_t _y;


    // Offsets
    int YAW_OFFSET = 0;
int X_OFFSET = 2;
int Y_OFFSET = 4;


    // Type
    
};
} // namespace comm

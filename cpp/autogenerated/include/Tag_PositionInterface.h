#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class Tag_PositionInterface : public RESTPacket{
    public :
        Tag_PositionInterface()
    {

    }
    // Variables
    int16_t _yaw;
int16_t _pitch;
int16_t _roll;
int16_t _x;
int16_t _y;
int16_t _z;


    // Offsets
    int YAW_OFFSET = 0;
int PITCH_OFFSET = 2;
int ROLL_OFFSET = 4;
int X_OFFSET = 6;
int Y_OFFSET = 8;
int Z_OFFSET = 10;


    // Type
    
};
} // namespace comm

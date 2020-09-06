#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Tag_PositionInterface : public RESTPacket{
    public :
        Tag_PositionInterface()
    {

    }
    // Variables
    int16 _yaw;
int16 _pitch;
int16 _roll;
int16 _x;
int16 _y;
int16 _z;


    // Offsets
    int YAW_OFFSET = 0;
int PITCH_OFFSET = 2;
int ROLL_OFFSET = 4;
int X_OFFSET = 6;
int Y_OFFSET = 8;
int Z_OFFSET = 10;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::TAG_POSITION; }
};
} // namespace comm

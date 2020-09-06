#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "int16.h"
#include "int16.h"
#include "int16.h"
#include "int16.h"
#include "int16.h"
#include "int16.h"


namespace comm
{
class TagPositionInterface : public RESTPacket{
    public :
        TagPositionInterface()
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
int PITCH_OFFSET = 1;
int ROLL_OFFSET = 2;
int X_OFFSET = 3;
int Y_OFFSET = 4;
int Z_OFFSET = 5;


    // Type
    int16 _yaw;
int16 _pitch;
int16 _roll;
int16 _x;
int16 _y;
int16 _z;

};
} // namespace comm

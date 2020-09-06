#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Field_PositionInterface : public RESTPacket{
    public :
        Field_PositionInterface()
    {

    }
    // Variables
    int16 _yaw;
int16 _x;
int16 _y;


    // Offsets
    int YAW_OFFSET = 0;
int X_OFFSET = 2;
int Y_OFFSET = 4;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::FIELD_POSITION; }
};
} // namespace comm

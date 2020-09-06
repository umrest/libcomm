#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Navigation_LineInterface : public RESTPacket{
    public :
        Navigation_LineInterface()
    {

    }
    // Variables
    int16 _x_start;
int16 _y_start;
int16 _x_end;
int16 _y_end;


    // Offsets
    int X_START_OFFSET = 0;
int Y_START_OFFSET = 2;
int X_END_OFFSET = 4;
int Y_END_OFFSET = 6;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_LINE; }
};
} // namespace comm

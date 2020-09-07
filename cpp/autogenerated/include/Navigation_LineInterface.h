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
    int16_t _x_start;
int16_t _y_start;
int16_t _x_end;
int16_t _y_end;


    // Offsets
    int X_START_OFFSET = 0;
int Y_START_OFFSET = 2;
int X_END_OFFSET = 4;
int Y_END_OFFSET = 6;


    // Type
    
};
} // namespace comm

#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "NavigationLine.h"


namespace comm
{
class NavigationLineInterface : public RESTPacket{
    public :
        NavigationLineInterface()
    {

    }
    // Variables
    int16_t _x_start;int16_t _y_start;int16_t _x_end;int16_t _y_end;

    // Offsets
    int x_start_OFFSET = 0;
            int y_start_OFFSET = 2;
            int x_end_OFFSET = 4;
            int y_end_OFFSET = 6;
            int SIZE = 8;

    // Type
    
};
} // namespace comm

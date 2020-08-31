#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "FieldPosition.h"


namespace comm
{
class FieldPositionInterface : public RESTPacket{
    public :
        FieldPositionInterface()
    {

    }
    // Variables
    int16_t _yaw;int16_t _x;int16_t _y;

    // Offsets
    int yaw_OFFSET = 0;
            int x_OFFSET = 2;
            int y_OFFSET = 4;
            int SIZE = 6;

    // Type
    
};
} // namespace comm

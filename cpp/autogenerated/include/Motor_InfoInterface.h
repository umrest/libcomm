#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Motor_InfoInterface : public RESTPacket{
    public :
        Motor_InfoInterface()
    {

    }
    // Variables
    uint8_t _can_id;
int16_t _current;
int64_t _position;
int32_t _velocity;
int8_t _percent;


    // Offsets
    int CAN_ID_OFFSET = 0;
int CURRENT_OFFSET = 1;
int POSITION_OFFSET = 3;
int VELOCITY_OFFSET = 11;
int PERCENT_OFFSET = 15;


    // Type
    
};
} // namespace comm

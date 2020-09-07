#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class Motor_InfoInterface : public RESTPacket{
    public :
        Motor_InfoInterface()
    {

    }
    // Variables
    uint8_t _can_id;
uint16_t _current;
uint8_t _percent;
uint32_t _position;
uint32_t _velocity;


    // Offsets
    int CAN_ID_OFFSET = 0;
int CURRENT_OFFSET = 1;
int PERCENT_OFFSET = 3;
int POSITION_OFFSET = 4;
int VELOCITY_OFFSET = 8;


    // Type
    
};
} // namespace comm

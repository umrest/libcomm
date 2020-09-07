#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class Robot_StateInterface : public RESTPacket{
    public :
        Robot_StateInterface()
    {

    }
    // Variables
    uint8_t _state;


    // Offsets
    int STATE_OFFSET = 0;


    // Type
    
};
} // namespace comm

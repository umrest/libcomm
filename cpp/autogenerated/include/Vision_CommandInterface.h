#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class Vision_CommandInterface : public RESTPacket{
    public :
        Vision_CommandInterface()
    {

    }
    // Variables
    uint8_t _command;


    // Offsets
    int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_COMMAND; }
};
} // namespace comm

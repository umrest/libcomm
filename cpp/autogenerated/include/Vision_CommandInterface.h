#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Vision_CommandInterface : public RESTPacket{
    public :
        Vision_CommandInterface()
    {

    }
    // Variables
    uint8 _command;


    // Offsets
    int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_COMMAND; }
};
} // namespace comm

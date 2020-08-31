#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Vision_Command.h"


namespace comm
{
class Vision_CommandInterface : public RESTPacket{
    public :
        Vision_CommandInterface()
    {

    }
    // Variables
    uint8_t _command;

    // Offsets
    int command_OFFSET = 0;
            int SIZE = 127;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_COMMAND; }
            
};
} // namespace comm

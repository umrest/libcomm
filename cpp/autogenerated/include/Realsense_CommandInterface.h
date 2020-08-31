#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Realsense_Command.h"


namespace comm
{
class Realsense_CommandInterface : public RESTPacket{
    public :
        Realsense_CommandInterface()
    {

    }
    // Variables
    uint8_t _command;

    // Offsets
    int command_OFFSET = 0;
            int SIZE = 127;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::REALSENSE_COMMAND; }
            
};
} // namespace comm

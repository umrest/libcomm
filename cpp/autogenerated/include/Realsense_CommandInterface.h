#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Realsense_CommandInterface : public RESTPacket{
    public :
        Realsense_CommandInterface()
    {

    }
    // Variables
    uint8 _command;


    // Offsets
    int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::REALSENSE_COMMAND; }
};
} // namespace comm

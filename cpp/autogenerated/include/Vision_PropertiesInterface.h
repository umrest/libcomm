#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Vision_PropertiesInterface : public RESTPacket{
    public :
        Vision_PropertiesInterface()
    {

    }
    // Variables
    uint8_t _command;


    // Offsets
    int COMMAND_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_PROPERTIES; }
};
} // namespace comm

#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Vision_Properties.h"


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
    int command_OFFSET = 0;
            int SIZE = 127;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_PROPERTIES; }
            
};
} // namespace comm

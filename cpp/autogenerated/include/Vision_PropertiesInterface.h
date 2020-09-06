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
    uint32_t _exposure;
uint32_t _gain;


    // Offsets
    int EXPOSURE_OFFSET = 0;
int GAIN_OFFSET = 4;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_PROPERTIES; }
};
} // namespace comm

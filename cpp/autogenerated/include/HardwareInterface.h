#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class HardwareInterface : public RESTPacket{
    public :
        HardwareInterface()
    {

    }
    // Variables
    uint8 _angle;


    // Offsets
    int ANGLE_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::HARDWARE; }
};
} // namespace comm

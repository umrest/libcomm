#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Hardware.h"


namespace comm
{
class HardwareInterface : public RESTPacket{
    public :
        HardwareInterface()
    {

    }
    // Variables
    uint8_t _angle;

    // Offsets
    int angle_OFFSET = 0;
            int SIZE = 8;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::HARDWARE; }
            
};
} // namespace comm

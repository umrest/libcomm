#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "MotorInfo.h"


namespace comm
{
class MotorInfoInterface : public RESTPacket{
    public :
        MotorInfoInterface()
    {

    }
    // Variables
    

    // Offsets
    int SIZE = 16;

    // Type
    
};
} // namespace comm

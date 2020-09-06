#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Motor_InfoInterface : public RESTPacket{
    public :
        Motor_InfoInterface()
    {

    }
    // Variables
    

    // Offsets
    

    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::MOTOR_INFO; }
};
} // namespace comm

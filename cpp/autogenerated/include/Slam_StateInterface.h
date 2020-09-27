#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Field_Position.h"


namespace comm
{
class Slam_StateInterface : public RESTPacket{
    public :
        Slam_StateInterface()
    {

    }
    // Variables
    Field_Position _field_position;


    // Offsets
    int FIELD_POSITION_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::SLAM_STATE; }
};
} // namespace comm

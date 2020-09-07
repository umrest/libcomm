#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Field_Position.h"


namespace comm
{
class Navigation_StateInterface : public RESTPacket{
    public :
        Navigation_StateInterface()
    {

    }
    // Variables
    Field_Position _field_position;


    // Offsets
    int FIELD_POSITION_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_STATE; }
};
} // namespace comm

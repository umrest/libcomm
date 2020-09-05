#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Navigation_State.h"
#include "FieldPosition.h"


namespace comm
{
class Navigation_StateInterface : public RESTPacket{
    public :
        Navigation_StateInterface()
    {

    }
    // Variables
    FieldPosition _field_position;

    // Offsets
    int field_position_OFFSET = 0;
            int SIZE = 120;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_STATE; }
            
};
} // namespace comm

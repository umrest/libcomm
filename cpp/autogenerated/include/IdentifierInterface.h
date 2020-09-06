#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class IdentifierInterface : public RESTPacket{
    public :
        IdentifierInterface()
    {

    }
    // Variables
    uint8 _identifier;


    // Offsets
    int IDENTIFIER_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::IDENTIFIER; }
};
} // namespace comm

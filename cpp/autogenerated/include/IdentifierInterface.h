#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Identifier.h"


namespace comm
{
class IdentifierInterface : public RESTPacket{
    public :
        IdentifierInterface()
    {

    }
    // Variables
    uint8_t _identifier;

    // Offsets
    int identifier_OFFSET = 0;
            int SIZE = 127;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::IDENTIFIER; }
            
};
} // namespace comm

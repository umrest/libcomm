#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Debug_MessageInterface : public RESTPacket{
    public :
        Debug_MessageInterface()
    {

    }
    // Variables
    uint8_t _identifier;
char _message[128];

    // Offsets
    int IDENTIFIER_OFFSET = 0;
int MESSAGE_OFFSET = 1;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::DEBUG_MESSAGE; }
};
} // namespace comm

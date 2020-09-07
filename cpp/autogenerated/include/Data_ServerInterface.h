#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "BitArray8.h"


namespace comm
{
class Data_ServerInterface : public RESTPacket{
    public :
        Data_ServerInterface()
    {

    }
    // Variables
    BitArray8 _connected_status;


    // Offsets
    int CONNECTED_STATUS_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::DATA_SERVER; }
};
} // namespace comm

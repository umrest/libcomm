#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Data_Server.h"
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
    int connected_status_OFFSET = 0;
            int SIZE = 127;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::DATA_SERVER; }
            
};
} // namespace comm

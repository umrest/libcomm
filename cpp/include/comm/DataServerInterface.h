#pragma once

// Requirements
#include "comm/Types.hpp"

namespace comm
{
class DataServerInterface : public RestPacket{
    public :
        DataServerInterface()
    {

    }
    // Variables
     BitArray8 connected_status;


    // Offsets
    const int CONNECTED_STATUS_OFFSET = 1;


};
} // namespace comm

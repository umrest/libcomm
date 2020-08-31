#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Dashboard.h"


namespace comm
{
class DashboardInterface : public RESTPacket{
    public :
        DashboardInterface()
    {

    }
    // Variables
    uint8_t _enabled_1;uint8_t _enabled_2;uint8_t _enabled_3;uint8_t _enabled_4;uint8_t _enabled_5;uint8_t _enabled_6;uint8_t _enabled_7;uint8_t _enabled_8;uint8_t _state;

    // Offsets
    int enabled_1_OFFSET = 0;
            int enabled_2_OFFSET = 1;
            int enabled_3_OFFSET = 2;
            int enabled_4_OFFSET = 3;
            int enabled_5_OFFSET = 4;
            int enabled_6_OFFSET = 5;
            int enabled_7_OFFSET = 6;
            int enabled_8_OFFSET = 7;
            int state_OFFSET = 8;
            int SIZE = 9;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::DASHBOARD; }
            
};
} // namespace comm

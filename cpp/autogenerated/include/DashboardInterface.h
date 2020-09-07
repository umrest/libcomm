#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class DashboardInterface : public RESTPacket{
    public :
        DashboardInterface()
    {

    }
    // Variables
    uint8_t _enabled_1;
uint8_t _enabled_2;
uint8_t _enabled_3;
uint8_t _enabled_4;
uint8_t _enabled_5;
uint8_t _enabled_6;
uint8_t _enabled_7;
uint8_t _enabled_8;
uint8_t _state;


    // Offsets
    int ENABLED_1_OFFSET = 0;
int ENABLED_2_OFFSET = 1;
int ENABLED_3_OFFSET = 2;
int ENABLED_4_OFFSET = 3;
int ENABLED_5_OFFSET = 4;
int ENABLED_6_OFFSET = 5;
int ENABLED_7_OFFSET = 6;
int ENABLED_8_OFFSET = 7;
int STATE_OFFSET = 8;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::DASHBOARD; }
};
} // namespace comm

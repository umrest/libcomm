#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class HardwareInterface : public RESTPacket{
    public :
        HardwareInterface()
    {

    }
    // Variables
    uint8_t _angle;
uint8_t _r;
uint8_t _g;
uint8_t _b;


    // Offsets
    int ANGLE_OFFSET = 0;
int R_OFFSET = 1;
int G_OFFSET = 2;
int B_OFFSET = 3;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::HARDWARE; }
};
} // namespace comm

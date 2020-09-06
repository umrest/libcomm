#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Navigation_Line.h"


namespace comm
{
class Navigation_PathInterface : public RESTPacket{
    public :
        Navigation_PathInterface()
    {

    }
    // Variables
    Navigation_Line _line_0;
Navigation_Line _line_1;
Navigation_Line _line_2;
Navigation_Line _line_3;
Navigation_Line _line_4;
Navigation_Line _line_5;
Navigation_Line _line_6;
Navigation_Line _line_7;
Navigation_Line _line_8;
Navigation_Line _line_9;
Navigation_Line _line_10;
Navigation_Line _line_11;
Navigation_Line _line_12;
Navigation_Line _line_13;
Navigation_Line _line_14;
Navigation_Line _line_15;
Navigation_Line _line_16;
Navigation_Line _line_17;
Navigation_Line _line_18;
Navigation_Line _line_19;
Navigation_Line _line_20;


    // Offsets
    int LINE_0_OFFSET = 0;
int LINE_1_OFFSET = 8;
int LINE_2_OFFSET = 16;
int LINE_3_OFFSET = 24;
int LINE_4_OFFSET = 32;
int LINE_5_OFFSET = 40;
int LINE_6_OFFSET = 48;
int LINE_7_OFFSET = 56;
int LINE_8_OFFSET = 64;
int LINE_9_OFFSET = 72;
int LINE_10_OFFSET = 80;
int LINE_11_OFFSET = 88;
int LINE_12_OFFSET = 96;
int LINE_13_OFFSET = 104;
int LINE_14_OFFSET = 112;
int LINE_15_OFFSET = 120;
int LINE_16_OFFSET = 128;
int LINE_17_OFFSET = 136;
int LINE_18_OFFSET = 144;
int LINE_19_OFFSET = 152;
int LINE_20_OFFSET = 160;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_PATH; }
};
} // namespace comm

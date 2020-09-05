#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Navigation_Path.h"
#include "Navigation_Line.h"


namespace comm
{
class Navigation_PathInterface : public RESTPacket{
    public :
        Navigation_PathInterface()
    {

    }
    // Variables
    Navigation_Line _line_0;Navigation_Line _line_1;Navigation_Line _line_2;Navigation_Line _line_3;Navigation_Line _line_4;Navigation_Line _line_5;Navigation_Line _line_6;Navigation_Line _line_7;Navigation_Line _line_8;Navigation_Line _line_9;Navigation_Line _line_10;Navigation_Line _line_11;Navigation_Line _line_12;Navigation_Line _line_13;Navigation_Line _line_14;Navigation_Line _line_15;Navigation_Line _line_16;Navigation_Line _line_17;Navigation_Line _line_18;Navigation_Line _line_19;Navigation_Line _line_20;

    // Offsets
    int line_0_OFFSET = 0;
            int line_1_OFFSET = 8;
            int line_2_OFFSET = 16;
            int line_3_OFFSET = 24;
            int line_4_OFFSET = 32;
            int line_5_OFFSET = 40;
            int line_6_OFFSET = 48;
            int line_7_OFFSET = 56;
            int line_8_OFFSET = 64;
            int line_9_OFFSET = 72;
            int line_10_OFFSET = 80;
            int line_11_OFFSET = 88;
            int line_12_OFFSET = 96;
            int line_13_OFFSET = 104;
            int line_14_OFFSET = 112;
            int line_15_OFFSET = 120;
            int line_16_OFFSET = 128;
            int line_17_OFFSET = 136;
            int line_18_OFFSET = 144;
            int line_19_OFFSET = 152;
            int line_20_OFFSET = 160;
            int SIZE = 200;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_PATH; }
            
};
} // namespace comm

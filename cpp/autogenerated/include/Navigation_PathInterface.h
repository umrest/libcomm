#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Navigation_Point.h"


namespace comm
{
class Navigation_PathInterface : public RESTPacket{
    public :
        Navigation_PathInterface()
    {

    }
    // Variables
    Navigation_Point _point_0;
Navigation_Point _point_1;
Navigation_Point _point_2;
Navigation_Point _point_3;
Navigation_Point _point_4;
Navigation_Point _point_5;
Navigation_Point _point_6;
Navigation_Point _point_7;
Navigation_Point _point_8;
Navigation_Point _point_9;
Navigation_Point _point_10;
Navigation_Point _point_11;
Navigation_Point _point_12;
Navigation_Point _point_13;
Navigation_Point _point_14;
Navigation_Point _point_15;
Navigation_Point _point_16;
Navigation_Point _point_17;
Navigation_Point _point_18;
Navigation_Point _point_19;
Navigation_Point _point_20;


    // Offsets
    int POINT_0_OFFSET = 0;
int POINT_1_OFFSET = 4;
int POINT_2_OFFSET = 8;
int POINT_3_OFFSET = 12;
int POINT_4_OFFSET = 16;
int POINT_5_OFFSET = 20;
int POINT_6_OFFSET = 24;
int POINT_7_OFFSET = 28;
int POINT_8_OFFSET = 32;
int POINT_9_OFFSET = 36;
int POINT_10_OFFSET = 40;
int POINT_11_OFFSET = 44;
int POINT_12_OFFSET = 48;
int POINT_13_OFFSET = 52;
int POINT_14_OFFSET = 56;
int POINT_15_OFFSET = 60;
int POINT_16_OFFSET = 64;
int POINT_17_OFFSET = 68;
int POINT_18_OFFSET = 72;
int POINT_19_OFFSET = 76;
int POINT_20_OFFSET = 80;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_PATH; }
};
} // namespace comm

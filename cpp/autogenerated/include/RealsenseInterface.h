#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Realsense.h"
#include "Obstacle.h"


namespace comm
{
class RealsenseInterface : public RESTPacket{
    public :
        RealsenseInterface()
    {

    }
    // Variables
    Obstacle _obstacle_1;Obstacle _obstacle_2;Obstacle _obstacle_3;Obstacle _obstacle_4;

    // Offsets
    int obstacle_1_OFFSET = 0;
            int obstacle_2_OFFSET = 16;
            int obstacle_3_OFFSET = 32;
            int obstacle_4_OFFSET = 48;
            int SIZE = 127;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::REALSENSE; }
            
};
} // namespace comm

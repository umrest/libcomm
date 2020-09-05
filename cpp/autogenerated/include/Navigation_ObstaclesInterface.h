#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Navigation_Obstacles.h"
#include "Navigation_Obstacle.h"


namespace comm
{
class Navigation_ObstaclesInterface : public RESTPacket{
    public :
        Navigation_ObstaclesInterface()
    {

    }
    // Variables
    Navigation_Obstacle _obstacle_0;Navigation_Obstacle _obstacle_1;Navigation_Obstacle _obstacle_2;Navigation_Obstacle _obstacle_3;

    // Offsets
    int obstacle_0_OFFSET = 0;
            int obstacle_1_OFFSET = 8;
            int obstacle_2_OFFSET = 16;
            int obstacle_3_OFFSET = 24;
            int SIZE = 200;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::NAVIGATION_OBSTACLES; }
            
};
} // namespace comm

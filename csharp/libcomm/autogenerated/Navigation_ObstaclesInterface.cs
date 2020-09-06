using comm;

namespace comm
{
class Navigation_ObstaclesInterface : RESTPacket{
    public Navigation_ObstaclesInterface()
    {

    }

           // Variables
    Navigation_Obstacle _obstacle_0;
Navigation_Obstacle _obstacle_1;
Navigation_Obstacle _obstacle_2;
Navigation_Obstacle _obstacle_3;


    // Offsets
    int OBSTACLE_0_OFFSET = 0;
int OBSTACLE_1_OFFSET = 8;
int OBSTACLE_2_OFFSET = 16;
int OBSTACLE_3_OFFSET = 24;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.NAVIGATION_OBSTACLES; }
    
};
} // namespace comm
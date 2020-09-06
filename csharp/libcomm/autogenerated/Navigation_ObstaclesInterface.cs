using System;

using comm;

namespace comm
{
public abstract class Navigation_ObstaclesInterface : RESTPacket{
    public Navigation_ObstaclesInterface()
    {

    }

           // Variables
    protected Navigation_Obstacle _obstacle_0;
protected Navigation_Obstacle _obstacle_1;
protected Navigation_Obstacle _obstacle_2;
protected Navigation_Obstacle _obstacle_3;


    // Offsets
    protected int OBSTACLE_0_OFFSET = 0;
protected int OBSTACLE_1_OFFSET = 8;
protected int OBSTACLE_2_OFFSET = 16;
protected int OBSTACLE_3_OFFSET = 24;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.NAVIGATION_OBSTACLES; }
    
};
} // namespace comm
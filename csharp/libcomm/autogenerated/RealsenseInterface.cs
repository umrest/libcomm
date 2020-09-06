using System;

using comm;

namespace comm
{
abstract class RealsenseInterface : RESTPacket{
    public RealsenseInterface()
    {

    }

           // Variables
    protected Obstacle _obstacle_1;
protected Obstacle _obstacle_2;
protected Obstacle _obstacle_3;
protected Obstacle _obstacle_4;


    // Offsets
    protected int OBSTACLE_1_OFFSET = 0;
protected int OBSTACLE_2_OFFSET = 16;
protected int OBSTACLE_3_OFFSET = 32;
protected int OBSTACLE_4_OFFSET = 48;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.REALSENSE; }
    
};
} // namespace comm
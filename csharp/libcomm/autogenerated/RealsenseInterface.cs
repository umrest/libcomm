using System;

using comm;

namespace comm
{
public abstract class RealsenseInterface : RESTPacket{
    public RealsenseInterface()
    {

    }

           // Variables
    protected Obstacle _obstacle_1 = new Obstacle();
protected Obstacle _obstacle_2 = new Obstacle();
protected Obstacle _obstacle_3 = new Obstacle();
protected Obstacle _obstacle_4 = new Obstacle();


    // Offsets
    protected int OBSTACLE_1_OFFSET = 0;
protected int OBSTACLE_2_OFFSET = 16;
protected int OBSTACLE_3_OFFSET = 32;
protected int OBSTACLE_4_OFFSET = 48;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.REALSENSE; }
    
};
} // namespace comm
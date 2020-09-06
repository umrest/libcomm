using comm;

namespace comm
{
class RealsenseInterface : RESTPacket{
    public RealsenseInterface()
    {

    }

           // Variables
    Obstacle _obstacle_1;
Obstacle _obstacle_2;
Obstacle _obstacle_3;
Obstacle _obstacle_4;


    // Offsets
    int OBSTACLE_1_OFFSET = 0;
int OBSTACLE_2_OFFSET = 16;
int OBSTACLE_3_OFFSET = 32;
int OBSTACLE_4_OFFSET = 48;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.REALSENSE; }
    
};
} // namespace comm
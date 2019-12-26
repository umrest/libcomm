namespace comm
{
    public abstract class Realsense : RESTPacket
    {
        public Realsense()
        {

        }

        // Variables
        public Obstacle _obstacle_1;
public Obstacle _obstacle_2;
public Obstacle _obstacle_3;
public Obstacle _obstacle_4;



        // Offsets
        public static int OBSTACLE_1_OFFSET = 1;
public static int OBSTACLE_2_OFFSET = 17;
public static int OBSTACLE_3_OFFSET = 33;
public static int OBSTACLE_4_OFFSET = 49;


    }
}

namespace comm
{
    public abstract class RobotState : RESTPacket
    {
        public RobotState()
        {

        }

        // Variables
        public MotorInfo _motor_info_1;
public MotorInfo _motor_info_2;
public MotorInfo _motor_info_3;
public MotorInfo _motor_info_4;
public MotorInfo _motor_info_5;
public MotorInfo _motor_info_6;
public MotorInfo _motor_info_7;
public MotorInfo _motor_info_8;



        // Offsets
        public static int MOTOR_INFO_1_OFFSET = 1;
public static int MOTOR_INFO_2_OFFSET = 17;
public static int MOTOR_INFO_3_OFFSET = 33;
public static int MOTOR_INFO_4_OFFSET = 49;
public static int MOTOR_INFO_5_OFFSET = 65;
public static int MOTOR_INFO_6_OFFSET = 81;
public static int MOTOR_INFO_7_OFFSET = 97;
public static int MOTOR_INFO_8_OFFSET = 113;


    }
}

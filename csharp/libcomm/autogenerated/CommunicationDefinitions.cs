using System.Collections.Generic;

namespace comm
{
    public static class CommunicationDefinitions
    {
        public enum TYPE : byte
                {
                    JOYSTICK = 1,
VISION = 2,
REALSENSE = 3,
SENSOR_STATE = 10,
DATA_SERVER = 8,
DASHBOARD = 9,
IDENTIFIER = 250,
ROBOT_STATE = 11,
VISION_COMMAND = 12,
VISION_IMAGE = 13,
VISION_PROPERTIES = 14,
HARDWARE = 15,
REALSENSE_COMMAND = 16,
NAVIGATION_PATH = 17,
SLAM_STATE = 18,
NAVIGATION_OBSTACLES = 19,
DEBUG_MESSAGE = 20,
INVALID = 255,

                };
public enum IDENTIFIER : byte
                {
                    DASHBOARD = 1,
VISION = 2,
TCPSERIAL = 3,
HARDWARE = 4,
DATASAVER = 5,
REALSENSE = 6,
SLAM = 7,
NAVIGATION = 8,

                };

        
        public static Dictionary<TYPE, int> PACKET_SIZES = new Dictionary<TYPE, int>(){
            {TYPE.ROBOT_STATE, 1},
{TYPE.NAVIGATION_PATH, 200},
{TYPE.NAVIGATION_OBSTACLES, 120},
{TYPE.SLAM_STATE, 120},
{TYPE.HARDWARE, 8},
{TYPE.JOYSTICK, 8},
{TYPE.VISION, 31},
{TYPE.REALSENSE, 127},
{TYPE.DATA_SERVER, 127},
{TYPE.DASHBOARD, 9},
{TYPE.SENSOR_STATE, 160},
{TYPE.VISION_COMMAND, 127},
{TYPE.REALSENSE_COMMAND, 127},
{TYPE.VISION_IMAGE, 8191},
{TYPE.IDENTIFIER, 127},
{TYPE.VISION_PROPERTIES, 127},
{TYPE.DEBUG_MESSAGE, 128},

        };
                

        public static byte[] key = { 44, 254, 153 };
    }
}

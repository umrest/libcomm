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
VISION_COMMAND = 12,
VISION_IMAGE = 13,
VISION_PROPERTIES = 14,
HARDWARE = 15,
REALSENSE_COMMAND = 16,
NAVIGATION_PATH = 17,
NAVIGATION_OBSTACLES = 17,
NAVIGATION_STATE = 18,
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
NAVIGATION = 7,

                };

        
        public static Dictionary<TYPE, int> PACKET_SIZES = new Dictionary<TYPE, int>(){
            {TYPE.NAVIGATION_PATH, 200},
{TYPE.NAVIGATION_OBSTACLES, 120},
{TYPE.NAVIGATION_STATE, 120},
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

        };

        public static byte[] key_ = { 44, 254, 153 };
    }
}

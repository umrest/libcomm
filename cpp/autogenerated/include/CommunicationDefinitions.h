#pragma once

#include <map>
#include <stdint.h>

namespace comm
{

class CommunicationDefinitions
{
    public:
        
        enum class TYPE
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
enum class IDENTIFIER
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

        
                

        CommunicationDefinitions(){
            
        }

static const std::map<TYPE, int> PACKET_SIZES;


        static uint8_t key[3];

        
    
};

}
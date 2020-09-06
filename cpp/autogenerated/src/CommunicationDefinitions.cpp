#include "CommunicationDefinitions.h"

using namespace comm;


        const std::map<CommunicationDefinitions::TYPE, int> CommunicationDefinitions::PACKET_SIZES = {
            {TYPE::NAVIGATION_PATH, 200},
{TYPE::NAVIGATION_OBSTACLES, 120},
{TYPE::NAVIGATION_STATE, 120},
{TYPE::HARDWARE, 8},
{TYPE::JOYSTICK, 8},
{TYPE::VISION, 31},
{TYPE::REALSENSE, 127},
{TYPE::DATA_SERVER, 127},
{TYPE::DASHBOARD, 9},
{TYPE::SENSOR_STATE, 160},
{TYPE::VISION_COMMAND, 127},
{TYPE::REALSENSE_COMMAND, 127},
{TYPE::VISION_IMAGE, 8191},
{TYPE::IDENTIFIER, 127},
{TYPE::VISION_PROPERTIES, 127},

        };
                

uint8_t CommunicationDefinitions::key[3] = {44, 254, 153};
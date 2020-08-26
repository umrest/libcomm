#include "comm/CommunicationDefinitions.h"

using namespace comm;

const std::map<CommunicationDefinitions::TYPE, int> CommunicationDefinitions::PACKET_SIZES = {
            {TYPE::JOYSTICK,  8},
            {TYPE::VISION,   31},
            {TYPE::REALSENSE,  127},
            {TYPE::DATAAGGREGATOR_STATE,  127},
            {TYPE::DASHBOARD_DATA,  9},
            {TYPE::SENSOR_STATE,  120},

            {TYPE::VISION_COMMAND,  127},
            {TYPE::VISION_IMAGE,  8191},
            {TYPE::IDENTIFIER,  127},
            {TYPE::VISION_PROPERTIES, 127},
            {TYPE::ROBOT_STATE, 1},
            {TYPE::HARDWARE, 8}
        };
uint8_t CommunicationDefinitions::key[3] = {44, 254, 153};
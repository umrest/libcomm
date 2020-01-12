#include "CommunicationDefinitions.h"

using namespace comm;

const std::map<CommunicationDefinitions::TYPE, int> CommunicationDefinitions::PACKET_SIZES = {
            {TYPE::JOYSTICK,  127},
            {TYPE::VISION,   127},
            {TYPE::REALSENSE,  127},
            {TYPE::DATAAGGREGATOR_STATE,  127},
            {TYPE::DASHBOARD_DATA,  127},
            {TYPE::ROBOT_STATE,  230},

            {TYPE::VISION_COMMAND,  127},
            {TYPE::VISION_IMAGE,  8191},
            {TYPE::IDENTIFIER,  127},
            {TYPE::VISION_PROPERTIES, 127}
        };

char CommunicationDefinitions::key[3] = { 44, 254, 153 };
#pragma once

#include <map>

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
        DATAAGGREGATOR_STATE = 8,
        DASHBOARD_DATA = 9,

        ROBOT_STATE = 10,

        VISION_COMMAND = 12,
        VISION_IMAGE = 13,
        VISION_PROPERTIES = 14,
        IDENTIFIER = 250

    };

    enum class IDENTIFIER
    {
        DASHBOARD = 1,
        VISION = 2,
        TCPSERIAL = 3,
        HERO = 4,
        DATASAVER = 5
    };

    static const std::map<TYPE, int> PACKET_SIZES;

    CommunicationDefinitions()
    {
    }

    static uint8_t key[3];
};

} // namespace comm
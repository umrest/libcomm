#pragma once

# #include<stdint.h>
#include "Types.hpp"

    namespace comm
{
    class TagPositionInterface : RESTPacket
    {
    public:
        TagPositionInterface()
        {
        }
        virtual void Serialize() = 0;
        virtual void Deserialize(char *) = 0;

        // Variables
        short _yaw;
        short _pitch;
        short _roll;
        short _x;
        short _y;
        short _z;

    protected:
        // Offsets
        const int YAW_OFFSET = 1;
        const int PITCH_OFFSET = 3;
        const int ROLL_OFFSET = 5;
        const int X_OFFSET = 7;
        const int Y_OFFSET = 9;
        const int Z_OFFSET = 11;
    };
} // namespace comm

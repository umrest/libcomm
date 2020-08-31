#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Sensor_State.h"
#include "MotorInfo.h"


namespace comm
{
class Sensor_StateInterface : public RESTPacket{
    public :
        Sensor_StateInterface()
    {

    }
    // Variables
    MotorInfo _motor_info_1;MotorInfo _motor_info_2;MotorInfo _motor_info_3;MotorInfo _motor_info_4;MotorInfo _motor_info_5;MotorInfo _motor_info_6;MotorInfo _motor_info_7;MotorInfo _motor_info_8;MotorInfo _motor_info_9;MotorInfo _motor_info_10;

    // Offsets
    int motor_info_1_OFFSET = 0;
            int motor_info_2_OFFSET = 16;
            int motor_info_3_OFFSET = 32;
            int motor_info_4_OFFSET = 48;
            int motor_info_5_OFFSET = 64;
            int motor_info_6_OFFSET = 80;
            int motor_info_7_OFFSET = 96;
            int motor_info_8_OFFSET = 112;
            int motor_info_9_OFFSET = 128;
            int motor_info_10_OFFSET = 144;
            int SIZE = 160;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::SENSOR_STATE; }
            
};
} // namespace comm

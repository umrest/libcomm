#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Motor_Info.h"


namespace comm
{
public abstract class Sensor_StateInterface : public RESTPacket{
    public :
        Sensor_StateInterface()
    {

    }
    // Variables
    Motor_Info _motor_info_1;
Motor_Info _motor_info_2;
Motor_Info _motor_info_3;
Motor_Info _motor_info_4;
Motor_Info _motor_info_5;
Motor_Info _motor_info_6;
Motor_Info _motor_info_7;
Motor_Info _motor_info_8;
Motor_Info _motor_info_9;
Motor_Info _motor_info_10;


    // Offsets
    int MOTOR_INFO_1_OFFSET = 0;
int MOTOR_INFO_2_OFFSET = 16;
int MOTOR_INFO_3_OFFSET = 32;
int MOTOR_INFO_4_OFFSET = 48;
int MOTOR_INFO_5_OFFSET = 64;
int MOTOR_INFO_6_OFFSET = 80;
int MOTOR_INFO_7_OFFSET = 96;
int MOTOR_INFO_8_OFFSET = 112;
int MOTOR_INFO_9_OFFSET = 128;
int MOTOR_INFO_10_OFFSET = 144;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::SENSOR_STATE; }
};
} // namespace comm

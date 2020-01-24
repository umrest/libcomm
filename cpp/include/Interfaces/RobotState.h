#pragma once

#include "Implementation/MotorInfo.h"

#include "Types.hpp"

namespace comm
{
    class RobotStateInterface : RestPacket
    {
        public:
            RobotStateInterface() {

            }
            // Variables
             MotorInfo motor_info_1;
 MotorInfo motor_info_2;
 MotorInfo motor_info_3;
 MotorInfo motor_info_4;
 MotorInfo motor_info_5;
 MotorInfo motor_info_6;
 MotorInfo motor_info_7;
 MotorInfo motor_info_8;


            // Offsets
            const int MOTOR_INFO_1_OFFSET = 1;

const int MOTOR_INFO_2_OFFSET = 17;

const int MOTOR_INFO_3_OFFSET = 33;

const int MOTOR_INFO_4_OFFSET = 49;

const int MOTOR_INFO_5_OFFSET = 65;

const int MOTOR_INFO_6_OFFSET = 81;

const int MOTOR_INFO_7_OFFSET = 97;

const int MOTOR_INFO_8_OFFSET = 113;


    };
} // namespace comm

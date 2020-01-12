#pragma once

#include <stdint.h>
#include <array>
#include "../Types.hpp"

namespace comm
{
    class RobotStateInterface
    {
        public:
            RobotStateInterface() {

            }
            virtual std::array<char*, 230> Serialize() = 0;
            virtual void Deserialize(char*) = 0;

            // Variables
             MotorInfo _motor_info_1;
 MotorInfo _motor_info_2;
 MotorInfo _motor_info_3;
 MotorInfo _motor_info_4;
 MotorInfo _motor_info_5;
 MotorInfo _motor_info_6;
 MotorInfo _motor_info_7;
 MotorInfo _motor_info_8;


        protected :
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

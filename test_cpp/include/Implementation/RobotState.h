#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class RobotState : RobotStateInterface
    {
        public:
            RobotState() {

            }
            
        std::array<char*, 230> Serialize() {
            std::array<char*, 230> data;
            
            MotorInfo* motor_info_1_ptr = &_motor_info_1;
            std::copy(motor_info_1_ptr, motor_info_1_ptr + 16, data.begin() + MOTOR_INFO_1_OFFSET);
            

            MotorInfo* motor_info_2_ptr = &_motor_info_2;
            std::copy(motor_info_2_ptr, motor_info_2_ptr + 16, data.begin() + MOTOR_INFO_2_OFFSET);
            

            MotorInfo* motor_info_3_ptr = &_motor_info_3;
            std::copy(motor_info_3_ptr, motor_info_3_ptr + 16, data.begin() + MOTOR_INFO_3_OFFSET);
            

            MotorInfo* motor_info_4_ptr = &_motor_info_4;
            std::copy(motor_info_4_ptr, motor_info_4_ptr + 16, data.begin() + MOTOR_INFO_4_OFFSET);
            

            MotorInfo* motor_info_5_ptr = &_motor_info_5;
            std::copy(motor_info_5_ptr, motor_info_5_ptr + 16, data.begin() + MOTOR_INFO_5_OFFSET);
            

            MotorInfo* motor_info_6_ptr = &_motor_info_6;
            std::copy(motor_info_6_ptr, motor_info_6_ptr + 16, data.begin() + MOTOR_INFO_6_OFFSET);
            

            MotorInfo* motor_info_7_ptr = &_motor_info_7;
            std::copy(motor_info_7_ptr, motor_info_7_ptr + 16, data.begin() + MOTOR_INFO_7_OFFSET);
            

            MotorInfo* motor_info_8_ptr = &_motor_info_8;
            std::copy(motor_info_8_ptr, motor_info_8_ptr + 16, data.begin() + MOTOR_INFO_8_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            MotorInfo* motor_info_1_ptr = &_motor_info_1;
            std::copy(data + MOTOR_INFO_1_OFFSET, data + MOTOR_INFO_1_OFFSET + 16, motor_info_1_ptr);
            

            MotorInfo* motor_info_2_ptr = &_motor_info_2;
            std::copy(data + MOTOR_INFO_2_OFFSET, data + MOTOR_INFO_2_OFFSET + 16, motor_info_2_ptr);
            

            MotorInfo* motor_info_3_ptr = &_motor_info_3;
            std::copy(data + MOTOR_INFO_3_OFFSET, data + MOTOR_INFO_3_OFFSET + 16, motor_info_3_ptr);
            

            MotorInfo* motor_info_4_ptr = &_motor_info_4;
            std::copy(data + MOTOR_INFO_4_OFFSET, data + MOTOR_INFO_4_OFFSET + 16, motor_info_4_ptr);
            

            MotorInfo* motor_info_5_ptr = &_motor_info_5;
            std::copy(data + MOTOR_INFO_5_OFFSET, data + MOTOR_INFO_5_OFFSET + 16, motor_info_5_ptr);
            

            MotorInfo* motor_info_6_ptr = &_motor_info_6;
            std::copy(data + MOTOR_INFO_6_OFFSET, data + MOTOR_INFO_6_OFFSET + 16, motor_info_6_ptr);
            

            MotorInfo* motor_info_7_ptr = &_motor_info_7;
            std::copy(data + MOTOR_INFO_7_OFFSET, data + MOTOR_INFO_7_OFFSET + 16, motor_info_7_ptr);
            

            MotorInfo* motor_info_8_ptr = &_motor_info_8;
            std::copy(data + MOTOR_INFO_8_OFFSET, data + MOTOR_INFO_8_OFFSET + 16, motor_info_8_ptr);
            
 
        }
        

            // Accessors
             MotorInfo motor_info_1(){ return _motor_info_1; }

 MotorInfo motor_info_2(){ return _motor_info_2; }

 MotorInfo motor_info_3(){ return _motor_info_3; }

 MotorInfo motor_info_4(){ return _motor_info_4; }

 MotorInfo motor_info_5(){ return _motor_info_5; }

 MotorInfo motor_info_6(){ return _motor_info_6; }

 MotorInfo motor_info_7(){ return _motor_info_7; }

 MotorInfo motor_info_8(){ return _motor_info_8; }


    };
} // namespace comm

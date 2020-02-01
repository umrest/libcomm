#pragma once

#include "comm/RobotStateInterface.h"


namespace comm
{
    class RobotState : public RobotStateInterface
    {
        public:
            RobotState() {

            }
            // Accessors
             MotorInfo _motor_info_1(){ return motor_info_1; }

 MotorInfo _motor_info_2(){ return motor_info_2; }

 MotorInfo _motor_info_3(){ return motor_info_3; }

 MotorInfo _motor_info_4(){ return motor_info_4; }

 MotorInfo _motor_info_5(){ return motor_info_5; }

 MotorInfo _motor_info_6(){ return motor_info_6; }

 MotorInfo _motor_info_7(){ return motor_info_7; }

 MotorInfo _motor_info_8(){ return motor_info_8; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(121);
            
            data[0] = 10;
            
            
                std::vector<uint8_t> motor_info_1_data = motor_info_1.Serialize();
                std::copy(motor_info_1_data.begin(), motor_info_1_data.begin() + 16, data.begin() + MOTOR_INFO_1_OFFSET);
                

                std::vector<uint8_t> motor_info_2_data = motor_info_2.Serialize();
                std::copy(motor_info_2_data.begin(), motor_info_2_data.begin() + 16, data.begin() + MOTOR_INFO_2_OFFSET);
                

                std::vector<uint8_t> motor_info_3_data = motor_info_3.Serialize();
                std::copy(motor_info_3_data.begin(), motor_info_3_data.begin() + 16, data.begin() + MOTOR_INFO_3_OFFSET);
                

                std::vector<uint8_t> motor_info_4_data = motor_info_4.Serialize();
                std::copy(motor_info_4_data.begin(), motor_info_4_data.begin() + 16, data.begin() + MOTOR_INFO_4_OFFSET);
                

                std::vector<uint8_t> motor_info_5_data = motor_info_5.Serialize();
                std::copy(motor_info_5_data.begin(), motor_info_5_data.begin() + 16, data.begin() + MOTOR_INFO_5_OFFSET);
                

                std::vector<uint8_t> motor_info_6_data = motor_info_6.Serialize();
                std::copy(motor_info_6_data.begin(), motor_info_6_data.begin() + 16, data.begin() + MOTOR_INFO_6_OFFSET);
                

                std::vector<uint8_t> motor_info_7_data = motor_info_7.Serialize();
                std::copy(motor_info_7_data.begin(), motor_info_7_data.begin() + 16, data.begin() + MOTOR_INFO_7_OFFSET);
                

                std::vector<uint8_t> motor_info_8_data = motor_info_8.Serialize();
                std::copy(motor_info_8_data.begin(), motor_info_8_data.begin() + 16, data.begin() + MOTOR_INFO_8_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::vector<uint8_t> motor_info_1_data(data.begin() + MOTOR_INFO_1_OFFSET, data.begin() + MOTOR_INFO_1_OFFSET + 16);
                motor_info_1.Deserialize(motor_info_1_data);
                

                std::vector<uint8_t> motor_info_2_data(data.begin() + MOTOR_INFO_2_OFFSET, data.begin() + MOTOR_INFO_2_OFFSET + 16);
                motor_info_2.Deserialize(motor_info_2_data);
                

                std::vector<uint8_t> motor_info_3_data(data.begin() + MOTOR_INFO_3_OFFSET, data.begin() + MOTOR_INFO_3_OFFSET + 16);
                motor_info_3.Deserialize(motor_info_3_data);
                

                std::vector<uint8_t> motor_info_4_data(data.begin() + MOTOR_INFO_4_OFFSET, data.begin() + MOTOR_INFO_4_OFFSET + 16);
                motor_info_4.Deserialize(motor_info_4_data);
                

                std::vector<uint8_t> motor_info_5_data(data.begin() + MOTOR_INFO_5_OFFSET, data.begin() + MOTOR_INFO_5_OFFSET + 16);
                motor_info_5.Deserialize(motor_info_5_data);
                

                std::vector<uint8_t> motor_info_6_data(data.begin() + MOTOR_INFO_6_OFFSET, data.begin() + MOTOR_INFO_6_OFFSET + 16);
                motor_info_6.Deserialize(motor_info_6_data);
                

                std::vector<uint8_t> motor_info_7_data(data.begin() + MOTOR_INFO_7_OFFSET, data.begin() + MOTOR_INFO_7_OFFSET + 16);
                motor_info_7.Deserialize(motor_info_7_data);
                

                std::vector<uint8_t> motor_info_8_data(data.begin() + MOTOR_INFO_8_OFFSET, data.begin() + MOTOR_INFO_8_OFFSET + 16);
                motor_info_8.Deserialize(motor_info_8_data);
                
 
        }
        

            
            
    };
} // namespace comm

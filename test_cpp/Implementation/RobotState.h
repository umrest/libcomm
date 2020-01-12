#pramga once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class RobotState : RobotStateInterface
    {
        public:
            RobotState() {

            }

            // Accessors
             MotorInfo motor_info_1(){ return _motor_info_1 };
 MotorInfo motor_info_2(){ return _motor_info_2 };
 MotorInfo motor_info_3(){ return _motor_info_3 };
 MotorInfo motor_info_4(){ return _motor_info_4 };
 MotorInfo motor_info_5(){ return _motor_info_5 };
 MotorInfo motor_info_6(){ return _motor_info_6 };
 MotorInfo motor_info_7(){ return _motor_info_7 };
 MotorInfo motor_info_8(){ return _motor_info_8 };

    };
} // namespace comm

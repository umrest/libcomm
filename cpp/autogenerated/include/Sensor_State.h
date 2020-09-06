#pragma once

#include "Sensor_StateInterface.h"


namespace comm
{
    class Sensor_State : public Sensor_StateInterface
    {
        public:
            Sensor_State() {

            }
            // Accessors
            Motor_Info get_motor_info_1(){
                _motor_info_1 = other;
            };
Motor_Info get_motor_info_2(){
                _motor_info_2 = other;
            };
Motor_Info get_motor_info_3(){
                _motor_info_3 = other;
            };
Motor_Info get_motor_info_4(){
                _motor_info_4 = other;
            };
Motor_Info get_motor_info_5(){
                _motor_info_5 = other;
            };
Motor_Info get_motor_info_6(){
                _motor_info_6 = other;
            };
Motor_Info get_motor_info_7(){
                _motor_info_7 = other;
            };
Motor_Info get_motor_info_8(){
                _motor_info_8 = other;
            };
Motor_Info get_motor_info_9(){
                _motor_info_9 = other;
            };
Motor_Info get_motor_info_10(){
                _motor_info_10 = other;
            };

void set_motor_info_1(Motor_Info other){
                _motor_info_1 = other;
            };
void set_motor_info_2(Motor_Info other){
                _motor_info_2 = other;
            };
void set_motor_info_3(Motor_Info other){
                _motor_info_3 = other;
            };
void set_motor_info_4(Motor_Info other){
                _motor_info_4 = other;
            };
void set_motor_info_5(Motor_Info other){
                _motor_info_5 = other;
            };
void set_motor_info_6(Motor_Info other){
                _motor_info_6 = other;
            };
void set_motor_info_7(Motor_Info other){
                _motor_info_7 = other;
            };
void set_motor_info_8(Motor_Info other){
                _motor_info_8 = other;
            };
void set_motor_info_9(Motor_Info other){
                _motor_info_9 = other;
            };
void set_motor_info_10(Motor_Info other){
                _motor_info_10 = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

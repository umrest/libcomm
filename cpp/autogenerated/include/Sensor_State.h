#pragma once

#include "Sensor_StateInterface.h"
#include "MotorInfoInterface.h"


namespace comm
{
    class Sensor_State : public Sensor_StateInterface
    {
        public:
            Sensor_State() {

            }
            // Accessors
            
            MotorInfo get_motor_info_1(){
                return _motor_info_1;
            }
            void set_motor_info_1(MotorInfo val){
                _motor_info_1 = val;
            }
            
            MotorInfo get_motor_info_2(){
                return _motor_info_2;
            }
            void set_motor_info_2(MotorInfo val){
                _motor_info_2 = val;
            }
            
            MotorInfo get_motor_info_3(){
                return _motor_info_3;
            }
            void set_motor_info_3(MotorInfo val){
                _motor_info_3 = val;
            }
            
            MotorInfo get_motor_info_4(){
                return _motor_info_4;
            }
            void set_motor_info_4(MotorInfo val){
                _motor_info_4 = val;
            }
            
            MotorInfo get_motor_info_5(){
                return _motor_info_5;
            }
            void set_motor_info_5(MotorInfo val){
                _motor_info_5 = val;
            }
            
            MotorInfo get_motor_info_6(){
                return _motor_info_6;
            }
            void set_motor_info_6(MotorInfo val){
                _motor_info_6 = val;
            }
            
            MotorInfo get_motor_info_7(){
                return _motor_info_7;
            }
            void set_motor_info_7(MotorInfo val){
                _motor_info_7 = val;
            }
            
            MotorInfo get_motor_info_8(){
                return _motor_info_8;
            }
            void set_motor_info_8(MotorInfo val){
                _motor_info_8 = val;
            }
            
            MotorInfo get_motor_info_9(){
                return _motor_info_9;
            }
            void set_motor_info_9(MotorInfo val){
                _motor_info_9 = val;
            }
            
            MotorInfo get_motor_info_10(){
                return _motor_info_10;
            }
            void set_motor_info_10(MotorInfo val){
                _motor_info_10 = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(160);
                     
            std::vector<uint8_t> __motor_info_1 = _motor_info_1.Serialize();
                    uint8_t* ___motor_info_1= &__motor_info_1[0];
            std::copy(___motor_info_1, ___motor_info_1 + 16, data.begin() + motor_info_1_OFFSET);
            
            std::vector<uint8_t> __motor_info_2 = _motor_info_2.Serialize();
                    uint8_t* ___motor_info_2= &__motor_info_2[0];
            std::copy(___motor_info_2, ___motor_info_2 + 16, data.begin() + motor_info_2_OFFSET);
            
            std::vector<uint8_t> __motor_info_3 = _motor_info_3.Serialize();
                    uint8_t* ___motor_info_3= &__motor_info_3[0];
            std::copy(___motor_info_3, ___motor_info_3 + 16, data.begin() + motor_info_3_OFFSET);
            
            std::vector<uint8_t> __motor_info_4 = _motor_info_4.Serialize();
                    uint8_t* ___motor_info_4= &__motor_info_4[0];
            std::copy(___motor_info_4, ___motor_info_4 + 16, data.begin() + motor_info_4_OFFSET);
            
            std::vector<uint8_t> __motor_info_5 = _motor_info_5.Serialize();
                    uint8_t* ___motor_info_5= &__motor_info_5[0];
            std::copy(___motor_info_5, ___motor_info_5 + 16, data.begin() + motor_info_5_OFFSET);
            
            std::vector<uint8_t> __motor_info_6 = _motor_info_6.Serialize();
                    uint8_t* ___motor_info_6= &__motor_info_6[0];
            std::copy(___motor_info_6, ___motor_info_6 + 16, data.begin() + motor_info_6_OFFSET);
            
            std::vector<uint8_t> __motor_info_7 = _motor_info_7.Serialize();
                    uint8_t* ___motor_info_7= &__motor_info_7[0];
            std::copy(___motor_info_7, ___motor_info_7 + 16, data.begin() + motor_info_7_OFFSET);
            
            std::vector<uint8_t> __motor_info_8 = _motor_info_8.Serialize();
                    uint8_t* ___motor_info_8= &__motor_info_8[0];
            std::copy(___motor_info_8, ___motor_info_8 + 16, data.begin() + motor_info_8_OFFSET);
            
            std::vector<uint8_t> __motor_info_9 = _motor_info_9.Serialize();
                    uint8_t* ___motor_info_9= &__motor_info_9[0];
            std::copy(___motor_info_9, ___motor_info_9 + 16, data.begin() + motor_info_9_OFFSET);
            
            std::vector<uint8_t> __motor_info_10 = _motor_info_10.Serialize();
                    uint8_t* ___motor_info_10= &__motor_info_10[0];
            std::copy(___motor_info_10, ___motor_info_10 + 16, data.begin() + motor_info_10_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_1_OFFSET, data.begin() + motor_info_1_OFFSET + 16, new_data.begin());
            _motor_info_1.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_2_OFFSET, data.begin() + motor_info_2_OFFSET + 16, new_data.begin());
            _motor_info_2.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_3_OFFSET, data.begin() + motor_info_3_OFFSET + 16, new_data.begin());
            _motor_info_3.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_4_OFFSET, data.begin() + motor_info_4_OFFSET + 16, new_data.begin());
            _motor_info_4.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_5_OFFSET, data.begin() + motor_info_5_OFFSET + 16, new_data.begin());
            _motor_info_5.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_6_OFFSET, data.begin() + motor_info_6_OFFSET + 16, new_data.begin());
            _motor_info_6.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_7_OFFSET, data.begin() + motor_info_7_OFFSET + 16, new_data.begin());
            _motor_info_7.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_8_OFFSET, data.begin() + motor_info_8_OFFSET + 16, new_data.begin());
            _motor_info_8.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_9_OFFSET, data.begin() + motor_info_9_OFFSET + 16, new_data.begin());
            _motor_info_9.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(16);
            std::copy(data.begin() + motor_info_10_OFFSET, data.begin() + motor_info_10_OFFSET + 16, new_data.begin());
            _motor_info_10.Deserialize(new_data);
            
                     }
                

            
            
    };
} // namespace comm

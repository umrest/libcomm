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
                return _motor_info_1;
            }
Motor_Info get_motor_info_2(){
                return _motor_info_2;
            }
Motor_Info get_motor_info_3(){
                return _motor_info_3;
            }
Motor_Info get_motor_info_4(){
                return _motor_info_4;
            }
Motor_Info get_motor_info_5(){
                return _motor_info_5;
            }
Motor_Info get_motor_info_6(){
                return _motor_info_6;
            }
Motor_Info get_motor_info_7(){
                return _motor_info_7;
            }
Motor_Info get_motor_info_8(){
                return _motor_info_8;
            }
Motor_Info get_motor_info_9(){
                return _motor_info_9;
            }
Motor_Info get_motor_info_10(){
                return _motor_info_10;
            }

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
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(160);
                     
            
            auto ___motor_info_1 = _motor_info_1.Serialize();
            uint8_t* __motor_info_1 = (uint8_t*)&___motor_info_1[0];

            std::copy(__motor_info_1, __motor_info_1 + 16, data.begin() + MOTOR_INFO_1_OFFSET);

            
            auto ___motor_info_2 = _motor_info_2.Serialize();
            uint8_t* __motor_info_2 = (uint8_t*)&___motor_info_2[0];

            std::copy(__motor_info_2, __motor_info_2 + 16, data.begin() + MOTOR_INFO_2_OFFSET);

            
            auto ___motor_info_3 = _motor_info_3.Serialize();
            uint8_t* __motor_info_3 = (uint8_t*)&___motor_info_3[0];

            std::copy(__motor_info_3, __motor_info_3 + 16, data.begin() + MOTOR_INFO_3_OFFSET);

            
            auto ___motor_info_4 = _motor_info_4.Serialize();
            uint8_t* __motor_info_4 = (uint8_t*)&___motor_info_4[0];

            std::copy(__motor_info_4, __motor_info_4 + 16, data.begin() + MOTOR_INFO_4_OFFSET);

            
            auto ___motor_info_5 = _motor_info_5.Serialize();
            uint8_t* __motor_info_5 = (uint8_t*)&___motor_info_5[0];

            std::copy(__motor_info_5, __motor_info_5 + 16, data.begin() + MOTOR_INFO_5_OFFSET);

            
            auto ___motor_info_6 = _motor_info_6.Serialize();
            uint8_t* __motor_info_6 = (uint8_t*)&___motor_info_6[0];

            std::copy(__motor_info_6, __motor_info_6 + 16, data.begin() + MOTOR_INFO_6_OFFSET);

            
            auto ___motor_info_7 = _motor_info_7.Serialize();
            uint8_t* __motor_info_7 = (uint8_t*)&___motor_info_7[0];

            std::copy(__motor_info_7, __motor_info_7 + 16, data.begin() + MOTOR_INFO_7_OFFSET);

            
            auto ___motor_info_8 = _motor_info_8.Serialize();
            uint8_t* __motor_info_8 = (uint8_t*)&___motor_info_8[0];

            std::copy(__motor_info_8, __motor_info_8 + 16, data.begin() + MOTOR_INFO_8_OFFSET);

            
            auto ___motor_info_9 = _motor_info_9.Serialize();
            uint8_t* __motor_info_9 = (uint8_t*)&___motor_info_9[0];

            std::copy(__motor_info_9, __motor_info_9 + 16, data.begin() + MOTOR_INFO_9_OFFSET);

            
            auto ___motor_info_10 = _motor_info_10.Serialize();
            uint8_t* __motor_info_10 = (uint8_t*)&___motor_info_10[0];

            std::copy(__motor_info_10, __motor_info_10 + 16, data.begin() + MOTOR_INFO_10_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        
            std::vector<uint8_t> __motor_info_1(16);
            std::copy(data.begin() + MOTOR_INFO_1_OFFSET, data.begin() + MOTOR_INFO_1_OFFSET + 16, __motor_info_1.begin());
            _motor_info_1.Deserialize(__motor_info_1);
        
            std::vector<uint8_t> __motor_info_2(16);
            std::copy(data.begin() + MOTOR_INFO_2_OFFSET, data.begin() + MOTOR_INFO_2_OFFSET + 16, __motor_info_2.begin());
            _motor_info_2.Deserialize(__motor_info_2);
        
            std::vector<uint8_t> __motor_info_3(16);
            std::copy(data.begin() + MOTOR_INFO_3_OFFSET, data.begin() + MOTOR_INFO_3_OFFSET + 16, __motor_info_3.begin());
            _motor_info_3.Deserialize(__motor_info_3);
        
            std::vector<uint8_t> __motor_info_4(16);
            std::copy(data.begin() + MOTOR_INFO_4_OFFSET, data.begin() + MOTOR_INFO_4_OFFSET + 16, __motor_info_4.begin());
            _motor_info_4.Deserialize(__motor_info_4);
        
            std::vector<uint8_t> __motor_info_5(16);
            std::copy(data.begin() + MOTOR_INFO_5_OFFSET, data.begin() + MOTOR_INFO_5_OFFSET + 16, __motor_info_5.begin());
            _motor_info_5.Deserialize(__motor_info_5);
        
            std::vector<uint8_t> __motor_info_6(16);
            std::copy(data.begin() + MOTOR_INFO_6_OFFSET, data.begin() + MOTOR_INFO_6_OFFSET + 16, __motor_info_6.begin());
            _motor_info_6.Deserialize(__motor_info_6);
        
            std::vector<uint8_t> __motor_info_7(16);
            std::copy(data.begin() + MOTOR_INFO_7_OFFSET, data.begin() + MOTOR_INFO_7_OFFSET + 16, __motor_info_7.begin());
            _motor_info_7.Deserialize(__motor_info_7);
        
            std::vector<uint8_t> __motor_info_8(16);
            std::copy(data.begin() + MOTOR_INFO_8_OFFSET, data.begin() + MOTOR_INFO_8_OFFSET + 16, __motor_info_8.begin());
            _motor_info_8.Deserialize(__motor_info_8);
        
            std::vector<uint8_t> __motor_info_9(16);
            std::copy(data.begin() + MOTOR_INFO_9_OFFSET, data.begin() + MOTOR_INFO_9_OFFSET + 16, __motor_info_9.begin());
            _motor_info_9.Deserialize(__motor_info_9);
        
            std::vector<uint8_t> __motor_info_10(16);
            std::copy(data.begin() + MOTOR_INFO_10_OFFSET, data.begin() + MOTOR_INFO_10_OFFSET + 16, __motor_info_10.begin());
            _motor_info_10.Deserialize(__motor_info_10);}
        

            
            
    };
} // namespace comm

using System;

using comm;

namespace comm
{
    class Sensor_State : Sensor_StateInterface
    {
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
            }
void set_motor_info_2(Motor_Info other){
                _motor_info_2 = other;
            }
void set_motor_info_3(Motor_Info other){
                _motor_info_3 = other;
            }
void set_motor_info_4(Motor_Info other){
                _motor_info_4 = other;
            }
void set_motor_info_5(Motor_Info other){
                _motor_info_5 = other;
            }
void set_motor_info_6(Motor_Info other){
                _motor_info_6 = other;
            }
void set_motor_info_7(Motor_Info other){
                _motor_info_7 = other;
            }
void set_motor_info_8(Motor_Info other){
                _motor_info_8 = other;
            }
void set_motor_info_9(Motor_Info other){
                _motor_info_9 = other;
            }
void set_motor_info_10(Motor_Info other){
                _motor_info_10 = other;
            }

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[160];
                     
            
            return _motor_info_1.Serialize();
            
            return _motor_info_2.Serialize();
            
            return _motor_info_3.Serialize();
            
            return _motor_info_4.Serialize();
            
            return _motor_info_5.Serialize();
            
            return _motor_info_6.Serialize();
            
            return _motor_info_7.Serialize();
            
            return _motor_info_8.Serialize();
            
            return _motor_info_9.Serialize();
            
            return _motor_info_10.Serialize();
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        
            byte[] __motor_info_1[16];
            Array.Copy(data, MOTOR_INFO_1_OFFSET, __motor_info_1, 0, 16);
            _motor_info_1.Deserialize(__motor_info_1);
        
            byte[] __motor_info_2[16];
            Array.Copy(data, MOTOR_INFO_2_OFFSET, __motor_info_2, 0, 16);
            _motor_info_2.Deserialize(__motor_info_2);
        
            byte[] __motor_info_3[16];
            Array.Copy(data, MOTOR_INFO_3_OFFSET, __motor_info_3, 0, 16);
            _motor_info_3.Deserialize(__motor_info_3);
        
            byte[] __motor_info_4[16];
            Array.Copy(data, MOTOR_INFO_4_OFFSET, __motor_info_4, 0, 16);
            _motor_info_4.Deserialize(__motor_info_4);
        
            byte[] __motor_info_5[16];
            Array.Copy(data, MOTOR_INFO_5_OFFSET, __motor_info_5, 0, 16);
            _motor_info_5.Deserialize(__motor_info_5);
        
            byte[] __motor_info_6[16];
            Array.Copy(data, MOTOR_INFO_6_OFFSET, __motor_info_6, 0, 16);
            _motor_info_6.Deserialize(__motor_info_6);
        
            byte[] __motor_info_7[16];
            Array.Copy(data, MOTOR_INFO_7_OFFSET, __motor_info_7, 0, 16);
            _motor_info_7.Deserialize(__motor_info_7);
        
            byte[] __motor_info_8[16];
            Array.Copy(data, MOTOR_INFO_8_OFFSET, __motor_info_8, 0, 16);
            _motor_info_8.Deserialize(__motor_info_8);
        
            byte[] __motor_info_9[16];
            Array.Copy(data, MOTOR_INFO_9_OFFSET, __motor_info_9, 0, 16);
            _motor_info_9.Deserialize(__motor_info_9);
        
            byte[] __motor_info_10[16];
            Array.Copy(data, MOTOR_INFO_10_OFFSET, __motor_info_10, 0, 16);
            _motor_info_10.Deserialize(__motor_info_10);}
        

            
            
    };
} // namespace comm

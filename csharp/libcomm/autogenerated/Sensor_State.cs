using System;

using comm;

namespace comm
{
    class Sensor_State : Sensor_StateInterface
    {
            Sensor_State() {

            }
            // Accessors
            public Motor_Info get_motor_info_1(){
                return _motor_info_1;
            }
public Motor_Info get_motor_info_2(){
                return _motor_info_2;
            }
public Motor_Info get_motor_info_3(){
                return _motor_info_3;
            }
public Motor_Info get_motor_info_4(){
                return _motor_info_4;
            }
public Motor_Info get_motor_info_5(){
                return _motor_info_5;
            }
public Motor_Info get_motor_info_6(){
                return _motor_info_6;
            }
public Motor_Info get_motor_info_7(){
                return _motor_info_7;
            }
public Motor_Info get_motor_info_8(){
                return _motor_info_8;
            }
public Motor_Info get_motor_info_9(){
                return _motor_info_9;
            }
public Motor_Info get_motor_info_10(){
                return _motor_info_10;
            }

public void set_motor_info_1(Motor_Info other){
                _motor_info_1 = other;
            }
public void set_motor_info_2(Motor_Info other){
                _motor_info_2 = other;
            }
public void set_motor_info_3(Motor_Info other){
                _motor_info_3 = other;
            }
public void set_motor_info_4(Motor_Info other){
                _motor_info_4 = other;
            }
public void set_motor_info_5(Motor_Info other){
                _motor_info_5 = other;
            }
public void set_motor_info_6(Motor_Info other){
                _motor_info_6 = other;
            }
public void set_motor_info_7(Motor_Info other){
                _motor_info_7 = other;
            }
public void set_motor_info_8(Motor_Info other){
                _motor_info_8 = other;
            }
public void set_motor_info_9(Motor_Info other){
                _motor_info_9 = other;
            }
public void set_motor_info_10(Motor_Info other){
                _motor_info_10 = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[160];
                     
            
            byte[] ___motor_info_1 = _motor_info_1.Serialize();
            Array.Copy(___motor_info_1, 0, data, MOTOR_INFO_1_OFFSET, 16);
            
            byte[] ___motor_info_2 = _motor_info_2.Serialize();
            Array.Copy(___motor_info_2, 0, data, MOTOR_INFO_2_OFFSET, 16);
            
            byte[] ___motor_info_3 = _motor_info_3.Serialize();
            Array.Copy(___motor_info_3, 0, data, MOTOR_INFO_3_OFFSET, 16);
            
            byte[] ___motor_info_4 = _motor_info_4.Serialize();
            Array.Copy(___motor_info_4, 0, data, MOTOR_INFO_4_OFFSET, 16);
            
            byte[] ___motor_info_5 = _motor_info_5.Serialize();
            Array.Copy(___motor_info_5, 0, data, MOTOR_INFO_5_OFFSET, 16);
            
            byte[] ___motor_info_6 = _motor_info_6.Serialize();
            Array.Copy(___motor_info_6, 0, data, MOTOR_INFO_6_OFFSET, 16);
            
            byte[] ___motor_info_7 = _motor_info_7.Serialize();
            Array.Copy(___motor_info_7, 0, data, MOTOR_INFO_7_OFFSET, 16);
            
            byte[] ___motor_info_8 = _motor_info_8.Serialize();
            Array.Copy(___motor_info_8, 0, data, MOTOR_INFO_8_OFFSET, 16);
            
            byte[] ___motor_info_9 = _motor_info_9.Serialize();
            Array.Copy(___motor_info_9, 0, data, MOTOR_INFO_9_OFFSET, 16);
            
            byte[] ___motor_info_10 = _motor_info_10.Serialize();
            Array.Copy(___motor_info_10, 0, data, MOTOR_INFO_10_OFFSET, 16);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        
            byte[] __motor_info_1 = new byte[16];
            Array.Copy(data, MOTOR_INFO_1_OFFSET, __motor_info_1, 0, 16);
            _motor_info_1.Deserialize(__motor_info_1);
        
            byte[] __motor_info_2 = new byte[16];
            Array.Copy(data, MOTOR_INFO_2_OFFSET, __motor_info_2, 0, 16);
            _motor_info_2.Deserialize(__motor_info_2);
        
            byte[] __motor_info_3 = new byte[16];
            Array.Copy(data, MOTOR_INFO_3_OFFSET, __motor_info_3, 0, 16);
            _motor_info_3.Deserialize(__motor_info_3);
        
            byte[] __motor_info_4 = new byte[16];
            Array.Copy(data, MOTOR_INFO_4_OFFSET, __motor_info_4, 0, 16);
            _motor_info_4.Deserialize(__motor_info_4);
        
            byte[] __motor_info_5 = new byte[16];
            Array.Copy(data, MOTOR_INFO_5_OFFSET, __motor_info_5, 0, 16);
            _motor_info_5.Deserialize(__motor_info_5);
        
            byte[] __motor_info_6 = new byte[16];
            Array.Copy(data, MOTOR_INFO_6_OFFSET, __motor_info_6, 0, 16);
            _motor_info_6.Deserialize(__motor_info_6);
        
            byte[] __motor_info_7 = new byte[16];
            Array.Copy(data, MOTOR_INFO_7_OFFSET, __motor_info_7, 0, 16);
            _motor_info_7.Deserialize(__motor_info_7);
        
            byte[] __motor_info_8 = new byte[16];
            Array.Copy(data, MOTOR_INFO_8_OFFSET, __motor_info_8, 0, 16);
            _motor_info_8.Deserialize(__motor_info_8);
        
            byte[] __motor_info_9 = new byte[16];
            Array.Copy(data, MOTOR_INFO_9_OFFSET, __motor_info_9, 0, 16);
            _motor_info_9.Deserialize(__motor_info_9);
        
            byte[] __motor_info_10 = new byte[16];
            Array.Copy(data, MOTOR_INFO_10_OFFSET, __motor_info_10, 0, 16);
            _motor_info_10.Deserialize(__motor_info_10);}
        

            
            
    };
} // namespace comm

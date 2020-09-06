using System;

using comm;

namespace comm
{
abstract class Sensor_StateInterface : RESTPacket{
    public Sensor_StateInterface()
    {

    }

           // Variables
    protected Motor_Info _motor_info_1;
protected Motor_Info _motor_info_2;
protected Motor_Info _motor_info_3;
protected Motor_Info _motor_info_4;
protected Motor_Info _motor_info_5;
protected Motor_Info _motor_info_6;
protected Motor_Info _motor_info_7;
protected Motor_Info _motor_info_8;
protected Motor_Info _motor_info_9;
protected Motor_Info _motor_info_10;


    // Offsets
    protected int MOTOR_INFO_1_OFFSET = 0;
protected int MOTOR_INFO_2_OFFSET = 16;
protected int MOTOR_INFO_3_OFFSET = 32;
protected int MOTOR_INFO_4_OFFSET = 48;
protected int MOTOR_INFO_5_OFFSET = 64;
protected int MOTOR_INFO_6_OFFSET = 80;
protected int MOTOR_INFO_7_OFFSET = 96;
protected int MOTOR_INFO_8_OFFSET = 112;
protected int MOTOR_INFO_9_OFFSET = 128;
protected int MOTOR_INFO_10_OFFSET = 144;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.SENSOR_STATE; }
    
};
} // namespace comm
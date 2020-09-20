using System;

using comm;

namespace comm
{
    public class Motor_Info : Motor_InfoInterface
    {
            public Motor_Info() {

            }
            // Accessors
            public byte get_can_id(){
                return _can_id;
            }
public double get_current(){
                return (double)(_current * 100);
            }
public double get_position(){
                return (double)(_position * 1/150);
            }
public double get_velocity(){
                return (double)(_velocity * 0.1);
            }
public sbyte get_percent(){
                return _percent;
            }

public void set_can_id(byte other){
                _can_id = other;
            }
public void set_current(double other){
                _current = (Int16)(other / 100);
            }
public void set_position(double other){
                _position = (Int64)(other / 1/150);
            }
public void set_velocity(double other){
                _velocity = (Int32)(other / 0.1);
            }
public void set_percent(sbyte other){
                _percent = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[16];
                     
            
            byte[] ___can_id = BitConverter.GetBytes(_can_id);
            Array.Copy(___can_id, 0, data, CAN_ID_OFFSET, 1);
            
            byte[] ___current = BitConverter.GetBytes(_current);
            Array.Copy(___current, 0, data, CURRENT_OFFSET, 2);
            
            byte[] ___position = BitConverter.GetBytes(_position);
            Array.Copy(___position, 0, data, POSITION_OFFSET, 8);
            
            byte[] ___velocity = BitConverter.GetBytes(_velocity);
            Array.Copy(___velocity, 0, data, VELOCITY_OFFSET, 4);
            
            byte[] ___percent = BitConverter.GetBytes(_percent);
            Array.Copy(___percent, 0, data, PERCENT_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _can_id = data[CAN_ID_OFFSET];
        _current = BitConverter.ToInt16(data, CURRENT_OFFSET);
        _position = BitConverter.ToInt64(data, POSITION_OFFSET);
        _velocity = BitConverter.ToInt32(data, VELOCITY_OFFSET);
        _percent = (sbyte)data[PERCENT_OFFSET];}
        

            
            
    };
} // namespace comm

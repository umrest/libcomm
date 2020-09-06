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
public UInt16 get_current(){
                return _current;
            }
public byte get_percent(){
                return _percent;
            }
public UInt32 get_position(){
                return _position;
            }
public UInt32 get_velocity(){
                return _velocity;
            }

public void set_can_id(byte other){
                _can_id = other;
            }
public void set_current(UInt16 other){
                _current = other;
            }
public void set_percent(byte other){
                _percent = other;
            }
public void set_position(UInt32 other){
                _position = other;
            }
public void set_velocity(UInt32 other){
                _velocity = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[16];
                     
            
            byte[] ___can_id = BitConverter.GetBytes(_can_id);
            Array.Copy(___can_id, 0, data, CAN_ID_OFFSET, 1);
            
            byte[] ___current = BitConverter.GetBytes(_current);
            Array.Copy(___current, 0, data, CURRENT_OFFSET, 2);
            
            byte[] ___percent = BitConverter.GetBytes(_percent);
            Array.Copy(___percent, 0, data, PERCENT_OFFSET, 1);
            
            byte[] ___position = BitConverter.GetBytes(_position);
            Array.Copy(___position, 0, data, POSITION_OFFSET, 4);
            
            byte[] ___velocity = BitConverter.GetBytes(_velocity);
            Array.Copy(___velocity, 0, data, VELOCITY_OFFSET, 4);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        _can_id = data[CAN_ID_OFFSET];
        _current = BitConverter.ToUInt16(data, CURRENT_OFFSET);
        _percent = data[PERCENT_OFFSET];
        _position = BitConverter.ToUInt32(data, POSITION_OFFSET);
        _velocity = BitConverter.ToUInt32(data, VELOCITY_OFFSET);}
        

            
            
    };
} // namespace comm

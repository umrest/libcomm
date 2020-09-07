using System;

using comm;

namespace comm
{
    public class Data_Server : Data_ServerInterface
    {
            public Data_Server() {

            }
            // Accessors
            public bool get_hero_connected(){
                return _connected_status.GetBit(0);
            }
public bool get_vision_connected(){
                return _connected_status.GetBit(1);
            }
public bool get_dashboard_connected(){
                return _connected_status.GetBit(2);
            }
public bool get_realsense_connected(){
                return _connected_status.GetBit(3);
            }
public bool get_tcpserial_connected(){
                return _connected_status.GetBit(4);
            }

public void set_hero_connected(bool other){
                _connected_status.SetBit(0, other);
            }
public void set_vision_connected(bool other){
                _connected_status.SetBit(1, other);
            }
public void set_dashboard_connected(bool other){
                _connected_status.SetBit(2, other);
            }
public void set_realsense_connected(bool other){
                _connected_status.SetBit(3, other);
            }
public void set_tcpserial_connected(bool other){
                _connected_status.SetBit(4, other);
            }

            
            // Serializers
            public byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___connected_status = _connected_status.Serialize();
            Array.Copy(___connected_status, 0, data, CONNECTED_STATUS_OFFSET, 1);
        return data;
        }
        public void Deserialize(byte[] data)  {
        
            byte[] __connected_status = new byte[1];
            Array.Copy(data, CONNECTED_STATUS_OFFSET, __connected_status, 0, 1);
            _connected_status.Deserialize(__connected_status);}
        

            
            
    };
} // namespace comm

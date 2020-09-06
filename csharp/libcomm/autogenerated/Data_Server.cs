using System;

using comm;

namespace comm
{
    public class Data_Server : Data_ServerInterface
    {
            public Data_Server() {

            }
            // Accessors
            public bool get_{'@name': 'vision_connected'}(){
                return _connected_status.GetBit(0);
            }
public bool get_{'@name': 'tcpserial_connected'}(){
                return _connected_status.GetBit(1);
            }
public bool get_{'@name': 'hero_connected'}(){
                return _connected_status.GetBit(2);
            }
public bool get_{'@name': 'dashboard_connected'}(){
                return _connected_status.GetBit(3);
            }

public void set_{'@name': 'vision_connected'}(bool other){
                _connected_status.SetBit(0, other);
            }
public void set_{'@name': 'tcpserial_connected'}(bool other){
                _connected_status.SetBit(1, other);
            }
public void set_{'@name': 'hero_connected'}(bool other){
                _connected_status.SetBit(2, other);
            }
public void set_{'@name': 'dashboard_connected'}(bool other){
                _connected_status.SetBit(3, other);
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___connected_status = _connected_status.Serialize();
            Array.Copy(___connected_status, 0, data, CONNECTED_STATUS_OFFSET, 1);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        
            byte[] __connected_status = new byte[1];
            Array.Copy(data, CONNECTED_STATUS_OFFSET, __connected_status, 0, 1);
            _connected_status.Deserialize(__connected_status);}
        

            
            
    };
} // namespace comm

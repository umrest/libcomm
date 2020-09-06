using System;

using comm;

namespace comm
{
    class Realsense : RealsenseInterface
    {
            public Realsense() {

            }
            // Accessors
            public Obstacle get_obstacle_1(){
                return _obstacle_1;
            }
public Obstacle get_obstacle_2(){
                return _obstacle_2;
            }
public Obstacle get_obstacle_3(){
                return _obstacle_3;
            }
public Obstacle get_obstacle_4(){
                return _obstacle_4;
            }

public void set_obstacle_1(Obstacle other){
                _obstacle_1 = other;
            }
public void set_obstacle_2(Obstacle other){
                _obstacle_2 = other;
            }
public void set_obstacle_3(Obstacle other){
                _obstacle_3 = other;
            }
public void set_obstacle_4(Obstacle other){
                _obstacle_4 = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            byte[] ___obstacle_1 = _obstacle_1.Serialize();
            Array.Copy(___obstacle_1, 0, data, OBSTACLE_1_OFFSET, 16);
            
            byte[] ___obstacle_2 = _obstacle_2.Serialize();
            Array.Copy(___obstacle_2, 0, data, OBSTACLE_2_OFFSET, 16);
            
            byte[] ___obstacle_3 = _obstacle_3.Serialize();
            Array.Copy(___obstacle_3, 0, data, OBSTACLE_3_OFFSET, 16);
            
            byte[] ___obstacle_4 = _obstacle_4.Serialize();
            Array.Copy(___obstacle_4, 0, data, OBSTACLE_4_OFFSET, 16);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        
            byte[] __obstacle_1 = new byte[16];
            Array.Copy(data, OBSTACLE_1_OFFSET, __obstacle_1, 0, 16);
            _obstacle_1.Deserialize(__obstacle_1);
        
            byte[] __obstacle_2 = new byte[16];
            Array.Copy(data, OBSTACLE_2_OFFSET, __obstacle_2, 0, 16);
            _obstacle_2.Deserialize(__obstacle_2);
        
            byte[] __obstacle_3 = new byte[16];
            Array.Copy(data, OBSTACLE_3_OFFSET, __obstacle_3, 0, 16);
            _obstacle_3.Deserialize(__obstacle_3);
        
            byte[] __obstacle_4 = new byte[16];
            Array.Copy(data, OBSTACLE_4_OFFSET, __obstacle_4, 0, 16);
            _obstacle_4.Deserialize(__obstacle_4);}
        

            
            
    };
} // namespace comm

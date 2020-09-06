using System;

using comm;

namespace comm
{
    class Navigation_Obstacles : Navigation_ObstaclesInterface
    {
            Navigation_Obstacles() {

            }
            // Accessors
            Navigation_Obstacle get_obstacle_0(){
                return _obstacle_0;
            }
Navigation_Obstacle get_obstacle_1(){
                return _obstacle_1;
            }
Navigation_Obstacle get_obstacle_2(){
                return _obstacle_2;
            }
Navigation_Obstacle get_obstacle_3(){
                return _obstacle_3;
            }

void set_obstacle_0(Navigation_Obstacle other){
                _obstacle_0 = other;
            }
void set_obstacle_1(Navigation_Obstacle other){
                _obstacle_1 = other;
            }
void set_obstacle_2(Navigation_Obstacle other){
                _obstacle_2 = other;
            }
void set_obstacle_3(Navigation_Obstacle other){
                _obstacle_3 = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[120];
                     
            
            byte[] ___obstacle_0 = _obstacle_0.Serialize();
            Array.Copy(___obstacle_0, 0, data, OBSTACLE_0_OFFSET, 8);
            
            byte[] ___obstacle_1 = _obstacle_1.Serialize();
            Array.Copy(___obstacle_1, 0, data, OBSTACLE_1_OFFSET, 8);
            
            byte[] ___obstacle_2 = _obstacle_2.Serialize();
            Array.Copy(___obstacle_2, 0, data, OBSTACLE_2_OFFSET, 8);
            
            byte[] ___obstacle_3 = _obstacle_3.Serialize();
            Array.Copy(___obstacle_3, 0, data, OBSTACLE_3_OFFSET, 8);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        
            byte[] __obstacle_0 = new byte[8];
            Array.Copy(data, OBSTACLE_0_OFFSET, __obstacle_0, 0, 8);
            _obstacle_0.Deserialize(__obstacle_0);
        
            byte[] __obstacle_1 = new byte[8];
            Array.Copy(data, OBSTACLE_1_OFFSET, __obstacle_1, 0, 8);
            _obstacle_1.Deserialize(__obstacle_1);
        
            byte[] __obstacle_2 = new byte[8];
            Array.Copy(data, OBSTACLE_2_OFFSET, __obstacle_2, 0, 8);
            _obstacle_2.Deserialize(__obstacle_2);
        
            byte[] __obstacle_3 = new byte[8];
            Array.Copy(data, OBSTACLE_3_OFFSET, __obstacle_3, 0, 8);
            _obstacle_3.Deserialize(__obstacle_3);}
        

            
            
    };
} // namespace comm

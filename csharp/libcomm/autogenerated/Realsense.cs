using comm;

namespace comm
{
    class Realsense : RealsenseInterface
    {
        public:
            Realsense() {

            }
            // Accessors
            Obstacle get_obstacle_1(){
                return _obstacle_1;
            }
Obstacle get_obstacle_2(){
                return _obstacle_2;
            }
Obstacle get_obstacle_3(){
                return _obstacle_3;
            }
Obstacle get_obstacle_4(){
                return _obstacle_4;
            }

void set_obstacle_1(Obstacle other){
                _obstacle_1 = other;
            };
void set_obstacle_2(Obstacle other){
                _obstacle_2 = other;
            };
void set_obstacle_3(Obstacle other){
                _obstacle_3 = other;
            };
void set_obstacle_4(Obstacle other){
                _obstacle_4 = other;
            };

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[127];
                     
            
            return _obstacle_1.Serialize();
            
            return _obstacle_2.Serialize();
            
            return _obstacle_3.Serialize();
            
            return _obstacle_4.Serialize();
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        
            byte[] __obstacle_1[16];
            Array.Copy(data, OBSTACLE_1_OFFSET, __obstacle_1, 0, 16);
            _obstacle_1.Deserialize(__obstacle_1);
        
            byte[] __obstacle_2[16];
            Array.Copy(data, OBSTACLE_2_OFFSET, __obstacle_2, 0, 16);
            _obstacle_2.Deserialize(__obstacle_2);
        
            byte[] __obstacle_3[16];
            Array.Copy(data, OBSTACLE_3_OFFSET, __obstacle_3, 0, 16);
            _obstacle_3.Deserialize(__obstacle_3);
        
            byte[] __obstacle_4[16];
            Array.Copy(data, OBSTACLE_4_OFFSET, __obstacle_4, 0, 16);
            _obstacle_4.Deserialize(__obstacle_4);}
        

            
            
    };
} // namespace comm

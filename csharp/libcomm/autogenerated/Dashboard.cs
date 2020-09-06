using comm;

namespace comm
{
    class Dashboard : DashboardInterface
    {
        public:
            Dashboard() {

            }
            // Accessors
            byte get_enabled_1(){
                return _enabled_1;
            }
byte get_enabled_2(){
                return _enabled_2;
            }
byte get_enabled_3(){
                return _enabled_3;
            }
byte get_enabled_4(){
                return _enabled_4;
            }
byte get_enabled_5(){
                return _enabled_5;
            }
byte get_enabled_6(){
                return _enabled_6;
            }
byte get_enabled_7(){
                return _enabled_7;
            }
byte get_enabled_8(){
                return _enabled_8;
            }
byte get_state(){
                return _state;
            }

void set_enabled_1(byte other){
                _enabled_1 = other;
            };
void set_enabled_2(byte other){
                _enabled_2 = other;
            };
void set_enabled_3(byte other){
                _enabled_3 = other;
            };
void set_enabled_4(byte other){
                _enabled_4 = other;
            };
void set_enabled_5(byte other){
                _enabled_5 = other;
            };
void set_enabled_6(byte other){
                _enabled_6 = other;
            };
void set_enabled_7(byte other){
                _enabled_7 = other;
            };
void set_enabled_8(byte other){
                _enabled_8 = other;
            };
void set_state(byte other){
                _state = other;
            };

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[9];
                     
            
            byte[] ___enabled_1 = BitConverter.GetBytes(_enabled_1);
            Array.Copy(___enabled_1, 0, data, ENABLED_1_OFFSET, 1);
            
            
            byte[] ___enabled_2 = BitConverter.GetBytes(_enabled_2);
            Array.Copy(___enabled_2, 0, data, ENABLED_2_OFFSET, 1);
            
            
            byte[] ___enabled_3 = BitConverter.GetBytes(_enabled_3);
            Array.Copy(___enabled_3, 0, data, ENABLED_3_OFFSET, 1);
            
            
            byte[] ___enabled_4 = BitConverter.GetBytes(_enabled_4);
            Array.Copy(___enabled_4, 0, data, ENABLED_4_OFFSET, 1);
            
            
            byte[] ___enabled_5 = BitConverter.GetBytes(_enabled_5);
            Array.Copy(___enabled_5, 0, data, ENABLED_5_OFFSET, 1);
            
            
            byte[] ___enabled_6 = BitConverter.GetBytes(_enabled_6);
            Array.Copy(___enabled_6, 0, data, ENABLED_6_OFFSET, 1);
            
            
            byte[] ___enabled_7 = BitConverter.GetBytes(_enabled_7);
            Array.Copy(___enabled_7, 0, data, ENABLED_7_OFFSET, 1);
            
            
            byte[] ___enabled_8 = BitConverter.GetBytes(_enabled_8);
            Array.Copy(___enabled_8, 0, data, ENABLED_8_OFFSET, 1);
            
            
            byte[] ___state = BitConverter.GetBytes(_state);
            Array.Copy(___state, 0, data, STATE_OFFSET, 1);
            
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        _enabled_1 = data[ENABLED_1_OFFSET]
        _enabled_2 = data[ENABLED_2_OFFSET]
        _enabled_3 = data[ENABLED_3_OFFSET]
        _enabled_4 = data[ENABLED_4_OFFSET]
        _enabled_5 = data[ENABLED_5_OFFSET]
        _enabled_6 = data[ENABLED_6_OFFSET]
        _enabled_7 = data[ENABLED_7_OFFSET]
        _enabled_8 = data[ENABLED_8_OFFSET]
        _state = data[STATE_OFFSET]}
        

            
            
    };
} // namespace comm

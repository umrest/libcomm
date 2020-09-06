using comm;

namespace comm
{
    class Joystick : JoystickInterface
    {
        public:
            Joystick() {

            }
            // Accessors
            bool get_button_A(){
                return _buttons_1.GetBit(0);
            }
bool get_button_B(){
                return _buttons_1.GetBit(1);
            }
bool get_button_X(){
                return _buttons_1.GetBit(2);
            }
bool get_button_Y(){
                return _buttons_1.GetBit(3);
            }
bool get_button_LB(){
                return _buttons_1.GetBit(4);
            }
bool get_button_RB(){
                return _buttons_1.GetBit(5);
            }
bool get_button_Select(){
                return _buttons_1.GetBit(6);
            }
bool get_button_Start(){
                return _buttons_1.GetBit(7);
            }
bool get_button_LJ(){
                return _buttons_2.GetBit(0);
            }
bool get_button_RJ(){
                return _buttons_2.GetBit(1);
            }
float get_lj_x(){
                return _lj_x / 0.00787401574;
            }
float get_lj_y(){
                return _lj_y / 0.00787401574;
            }
float get_rj_x(){
                return _rj_x / 0.00787401574;
            }
float get_rj_y(){
                return _rj_y / 0.00787401574;
            }
float get_lt(){
                return _lt / 0.00787401574;
            }
float get_rt(){
                return _rt / 0.00787401574;
            }

void set_button_A(bool other){
                _buttons_1.SetBit(0, other);
            };
void set_button_B(bool other){
                _buttons_1.SetBit(1, other);
            };
void set_button_X(bool other){
                _buttons_1.SetBit(2, other);
            };
void set_button_Y(bool other){
                _buttons_1.SetBit(3, other);
            };
void set_button_LB(bool other){
                _buttons_1.SetBit(4, other);
            };
void set_button_RB(bool other){
                _buttons_1.SetBit(5, other);
            };
void set_button_Select(bool other){
                _buttons_1.SetBit(6, other);
            };
void set_button_Start(bool other){
                _buttons_1.SetBit(7, other);
            };
void set_button_LJ(bool other){
                _buttons_2.SetBit(0, other);
            };
void set_button_RJ(bool other){
                _buttons_2.SetBit(1, other);
            };
void set_lj_x(float other){
                _lj_x = other * 0.00787401574;
            };
void set_lj_y(float other){
                _lj_y = other * 0.00787401574;
            };
void set_rj_x(float other){
                _rj_x = other * 0.00787401574;
            };
void set_rj_y(float other){
                _rj_y = other * 0.00787401574;
            };
void set_lt(float other){
                _lt = other * 0.00787401574;
            };
void set_rt(float other){
                _rt = other * 0.00787401574;
            };

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[8];
                     
            
            return _buttons_1.Serialize();
            
            return _buttons_2.Serialize();
            
            byte[] ___lj_x = BitConverter.GetBytes(_lj_x);
            Array.Copy(___lj_x, 0, data, LJ_X_OFFSET, 1);
            
            
            byte[] ___lj_y = BitConverter.GetBytes(_lj_y);
            Array.Copy(___lj_y, 0, data, LJ_Y_OFFSET, 1);
            
            
            byte[] ___rj_x = BitConverter.GetBytes(_rj_x);
            Array.Copy(___rj_x, 0, data, RJ_X_OFFSET, 1);
            
            
            byte[] ___rj_y = BitConverter.GetBytes(_rj_y);
            Array.Copy(___rj_y, 0, data, RJ_Y_OFFSET, 1);
            
            
            byte[] ___lt = BitConverter.GetBytes(_lt);
            Array.Copy(___lt, 0, data, LT_OFFSET, 1);
            
            
            byte[] ___rt = BitConverter.GetBytes(_rt);
            Array.Copy(___rt, 0, data, RT_OFFSET, 1);
            
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        
            byte[] __buttons_1[1];
            Array.Copy(data, BUTTONS_1_OFFSET, __buttons_1, 0, 1);
            _buttons_1.Deserialize(__buttons_1);
        
            byte[] __buttons_2[1];
            Array.Copy(data, BUTTONS_2_OFFSET, __buttons_2, 0, 1);
            _buttons_2.Deserialize(__buttons_2);
        BitConverter.Tosbyte(data, LJ_X_OFFSET);
        BitConverter.Tosbyte(data, LJ_Y_OFFSET);
        BitConverter.Tosbyte(data, RJ_X_OFFSET);
        BitConverter.Tosbyte(data, RJ_Y_OFFSET);
        BitConverter.Tosbyte(data, LT_OFFSET);
        BitConverter.Tosbyte(data, RT_OFFSET);}
        

            
            
    };
} // namespace comm

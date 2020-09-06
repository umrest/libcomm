using System;

using comm;

namespace comm
{
    class Joystick : JoystickInterface
    {
            Joystick() {

            }
            // Accessors
            public bool get_button_A(){
                return _buttons_1.GetBit(0);
            }
public bool get_button_B(){
                return _buttons_1.GetBit(1);
            }
public bool get_button_X(){
                return _buttons_1.GetBit(2);
            }
public bool get_button_Y(){
                return _buttons_1.GetBit(3);
            }
public bool get_button_LB(){
                return _buttons_1.GetBit(4);
            }
public bool get_button_RB(){
                return _buttons_1.GetBit(5);
            }
public bool get_button_Select(){
                return _buttons_1.GetBit(6);
            }
public bool get_button_Start(){
                return _buttons_1.GetBit(7);
            }
public bool get_button_LJ(){
                return _buttons_2.GetBit(0);
            }
public bool get_button_RJ(){
                return _buttons_2.GetBit(1);
            }
public double get_lj_x(){
                return (double)(_lj_x / 0.00787401574);
            }
public double get_lj_y(){
                return (double)(_lj_y / 0.00787401574);
            }
public double get_rj_x(){
                return (double)(_rj_x / 0.00787401574);
            }
public double get_rj_y(){
                return (double)(_rj_y / 0.00787401574);
            }
public double get_lt(){
                return (double)(_lt / 0.00787401574);
            }
public double get_rt(){
                return (double)(_rt / 0.00787401574);
            }

public void set_button_A(bool other){
                _buttons_1.SetBit(0, other);
            }
public void set_button_B(bool other){
                _buttons_1.SetBit(1, other);
            }
public void set_button_X(bool other){
                _buttons_1.SetBit(2, other);
            }
public void set_button_Y(bool other){
                _buttons_1.SetBit(3, other);
            }
public void set_button_LB(bool other){
                _buttons_1.SetBit(4, other);
            }
public void set_button_RB(bool other){
                _buttons_1.SetBit(5, other);
            }
public void set_button_Select(bool other){
                _buttons_1.SetBit(6, other);
            }
public void set_button_Start(bool other){
                _buttons_1.SetBit(7, other);
            }
public void set_button_LJ(bool other){
                _buttons_2.SetBit(0, other);
            }
public void set_button_RJ(bool other){
                _buttons_2.SetBit(1, other);
            }
public void set_lj_x(double other){
                _lj_x = (sbyte)(other * 0.00787401574);
            }
public void set_lj_y(double other){
                _lj_y = (sbyte)(other * 0.00787401574);
            }
public void set_rj_x(double other){
                _rj_x = (sbyte)(other * 0.00787401574);
            }
public void set_rj_y(double other){
                _rj_y = (sbyte)(other * 0.00787401574);
            }
public void set_lt(double other){
                _lt = (sbyte)(other * 0.00787401574);
            }
public void set_rt(double other){
                _rt = (sbyte)(other * 0.00787401574);
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[8];
                     
            
            byte[] ___buttons_1 = _buttons_1.Serialize();
            Array.Copy(___buttons_1, 0, data, BUTTONS_1_OFFSET, 1);
            
            byte[] ___buttons_2 = _buttons_2.Serialize();
            Array.Copy(___buttons_2, 0, data, BUTTONS_2_OFFSET, 1);
            
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
        public override void Deserialize(byte[] data)  {
        
            byte[] __buttons_1 = new byte[1];
            Array.Copy(data, BUTTONS_1_OFFSET, __buttons_1, 0, 1);
            _buttons_1.Deserialize(__buttons_1);
        
            byte[] __buttons_2 = new byte[1];
            Array.Copy(data, BUTTONS_2_OFFSET, __buttons_2, 0, 1);
            _buttons_2.Deserialize(__buttons_2);
        _lj_x = (sbyte)data[LJ_X_OFFSET];
        _lj_y = (sbyte)data[LJ_Y_OFFSET];
        _rj_x = (sbyte)data[RJ_X_OFFSET];
        _rj_y = (sbyte)data[RJ_Y_OFFSET];
        _lt = (sbyte)data[LT_OFFSET];
        _rt = (sbyte)data[RT_OFFSET];}
        

            
            
    };
} // namespace comm

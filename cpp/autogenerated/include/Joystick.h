#pragma once

#include "JoystickInterface.h"
#include "BitArray8Interface.h"


namespace comm
{
    class Joystick : public JoystickInterface
    {
        public:
            Joystick() {

            }
            // Accessors
            
            bool get_button_A(){
                return _buttons_1.GetBit(0);
            }
            void set_button_A(bool val){
                _buttons_1.SetBit(0, val);
            }
            
            bool get_button_B(){
                return _buttons_1.GetBit(1);
            }
            void set_button_B(bool val){
                _buttons_1.SetBit(1, val);
            }
            
            bool get_button_X(){
                return _buttons_1.GetBit(2);
            }
            void set_button_X(bool val){
                _buttons_1.SetBit(2, val);
            }
            
            bool get_button_Y(){
                return _buttons_1.GetBit(3);
            }
            void set_button_Y(bool val){
                _buttons_1.SetBit(3, val);
            }
            
            bool get_button_LB(){
                return _buttons_1.GetBit(4);
            }
            void set_button_LB(bool val){
                _buttons_1.SetBit(4, val);
            }
            
            bool get_button_RB(){
                return _buttons_1.GetBit(5);
            }
            void set_button_RB(bool val){
                _buttons_1.SetBit(5, val);
            }
            
            bool get_button_Select(){
                return _buttons_1.GetBit(6);
            }
            void set_button_Select(bool val){
                _buttons_1.SetBit(6, val);
            }
            
            bool get_button_Start(){
                return _buttons_1.GetBit(7);
            }
            void set_button_Start(bool val){
                _buttons_1.SetBit(7, val);
            }
            
            bool get_button_LJ(){
                return _buttons_2.GetBit(0);
            }
            void set_button_LJ(bool val){
                _buttons_2.SetBit(0, val);
            }
            
            bool get_button_RJ(){
                return _buttons_2.GetBit(1);
            }
            void set_button_RJ(bool val){
                _buttons_2.SetBit(1, val);
            }
            
            float get_lj_x(){
                return _lj_x * 0.00787401574;
            }
            void set_lj_x(float val){
                _lj_x = val / 0.00787401574;
            }
            
            float get_lj_y(){
                return _lj_y * 0.00787401574;
            }
            void set_lj_y(float val){
                _lj_y = val / 0.00787401574;
            }
            
            float get_rj_x(){
                return _rj_x * 0.00787401574;
            }
            void set_rj_x(float val){
                _rj_x = val / 0.00787401574;
            }
            
            float get_rj_y(){
                return _rj_y * 0.00787401574;
            }
            void set_rj_y(float val){
                _rj_y = val / 0.00787401574;
            }
            
            float get_lt(){
                return _lt * 0.00787401574;
            }
            void set_lt(float val){
                _lt = val / 0.00787401574;
            }
            
            float get_rt(){
                return _rt * 0.00787401574;
            }
            void set_rt(float val){
                _rt = val / 0.00787401574;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            std::vector<uint8_t> __buttons_1 = _buttons_1.Serialize();
                    uint8_t* ___buttons_1= &__buttons_1[0];
            std::copy(___buttons_1, ___buttons_1 + 1, data.begin() + buttons_1_OFFSET);
            
            std::vector<uint8_t> __buttons_2 = _buttons_2.Serialize();
                    uint8_t* ___buttons_2= &__buttons_2[0];
            std::copy(___buttons_2, ___buttons_2 + 1, data.begin() + buttons_2_OFFSET);
            
            
            uint8_t* ___lj_x = (uint8_t*)&_lj_x;
            
            std::copy(___lj_x, ___lj_x + 1, data.begin() + lj_x_OFFSET);
            
            
            uint8_t* ___lj_y = (uint8_t*)&_lj_y;
            
            std::copy(___lj_y, ___lj_y + 1, data.begin() + lj_y_OFFSET);
            
            
            uint8_t* ___rj_x = (uint8_t*)&_rj_x;
            
            std::copy(___rj_x, ___rj_x + 1, data.begin() + rj_x_OFFSET);
            
            
            uint8_t* ___rj_y = (uint8_t*)&_rj_y;
            
            std::copy(___rj_y, ___rj_y + 1, data.begin() + rj_y_OFFSET);
            
            
            uint8_t* ___lt = (uint8_t*)&_lt;
            
            std::copy(___lt, ___lt + 1, data.begin() + lt_OFFSET);
            
            
            uint8_t* ___rt = (uint8_t*)&_rt;
            
            std::copy(___rt, ___rt + 1, data.begin() + rt_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            new_data.clear();
            new_data.resize(1);
            std::copy(data.begin() + buttons_1_OFFSET, data.begin() + buttons_1_OFFSET + 1, new_data.begin());
            _buttons_1.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(1);
            std::copy(data.begin() + buttons_2_OFFSET, data.begin() + buttons_2_OFFSET + 1, new_data.begin());
            _buttons_2.Deserialize(new_data);
            
         
            std::copy(data.begin() + lj_x_OFFSET, data.begin() + lj_x_OFFSET + 1, (uint8_t *)&_lj_x);
            
         
            std::copy(data.begin() + lj_y_OFFSET, data.begin() + lj_y_OFFSET + 1, (uint8_t *)&_lj_y);
            
         
            std::copy(data.begin() + rj_x_OFFSET, data.begin() + rj_x_OFFSET + 1, (uint8_t *)&_rj_x);
            
         
            std::copy(data.begin() + rj_y_OFFSET, data.begin() + rj_y_OFFSET + 1, (uint8_t *)&_rj_y);
            
         
            std::copy(data.begin() + lt_OFFSET, data.begin() + lt_OFFSET + 1, (uint8_t *)&_lt);
            
         
            std::copy(data.begin() + rt_OFFSET, data.begin() + rt_OFFSET + 1, (uint8_t *)&_rt);
            
                     }
                

            
            
    };
} // namespace comm

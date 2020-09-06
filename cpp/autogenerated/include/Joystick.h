#pragma once

#include "JoystickInterface.h"


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
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(8);
                     
            
            auto ___buttons_1 = _buttons_1.Serialize();
            uint8_t* __buttons_1 = (uint8_t*)&___buttons_1[0];

            std::copy(__buttons_1, __buttons_1 + 1, data.begin() + BUTTONS_1_OFFSET);

            
            auto ___buttons_2 = _buttons_2.Serialize();
            uint8_t* __buttons_2 = (uint8_t*)&___buttons_2[0];

            std::copy(__buttons_2, __buttons_2 + 1, data.begin() + BUTTONS_2_OFFSET);

            uint8_t* __lj_x = (uint8_t*)&_lj_x;

            std::copy(__lj_x, __lj_x + 1, data.begin() + LJ_X_OFFSET);

            uint8_t* __lj_y = (uint8_t*)&_lj_y;

            std::copy(__lj_y, __lj_y + 1, data.begin() + LJ_Y_OFFSET);

            uint8_t* __rj_x = (uint8_t*)&_rj_x;

            std::copy(__rj_x, __rj_x + 1, data.begin() + RJ_X_OFFSET);

            uint8_t* __rj_y = (uint8_t*)&_rj_y;

            std::copy(__rj_y, __rj_y + 1, data.begin() + RJ_Y_OFFSET);

            uint8_t* __lt = (uint8_t*)&_lt;

            std::copy(__lt, __lt + 1, data.begin() + LT_OFFSET);

            uint8_t* __rt = (uint8_t*)&_rt;

            std::copy(__rt, __rt + 1, data.begin() + RT_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        
            std::vector<uint8_t> __buttons_1(1);
            std::copy(data.begin() + BUTTONS_1_OFFSET, data.begin() + BUTTONS_1_OFFSET + 1, new_data.begin());
            _buttons_1.Deserialize(__buttons_1);
        
            std::vector<uint8_t> __buttons_2(1);
            std::copy(data.begin() + BUTTONS_2_OFFSET, data.begin() + BUTTONS_2_OFFSET + 1, new_data.begin());
            _buttons_2.Deserialize(__buttons_2);
        std::copy(data.begin() + LJ_X_OFFSET, data.begin() + LJ_X_OFFSET + 1, (uint8_t *)&_lj_x);
        std::copy(data.begin() + LJ_Y_OFFSET, data.begin() + LJ_Y_OFFSET + 1, (uint8_t *)&_lj_y);
        std::copy(data.begin() + RJ_X_OFFSET, data.begin() + RJ_X_OFFSET + 1, (uint8_t *)&_rj_x);
        std::copy(data.begin() + RJ_Y_OFFSET, data.begin() + RJ_Y_OFFSET + 1, (uint8_t *)&_rj_y);
        std::copy(data.begin() + LT_OFFSET, data.begin() + LT_OFFSET + 1, (uint8_t *)&_lt);
        std::copy(data.begin() + RT_OFFSET, data.begin() + RT_OFFSET + 1, (uint8_t *)&_rt);}
        

            
            
    };
} // namespace comm

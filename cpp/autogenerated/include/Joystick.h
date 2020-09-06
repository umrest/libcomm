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
                _buttons_1.GetBit(0);
            };
bool get_button_B(){
                _buttons_1.GetBit(1);
            };
bool get_button_X(){
                _buttons_1.GetBit(2);
            };
bool get_button_Y(){
                _buttons_1.GetBit(3);
            };
bool get_button_LB(){
                _buttons_1.GetBit(4);
            };
bool get_button_RB(){
                _buttons_1.GetBit(5);
            };
bool get_button_Select(){
                _buttons_1.GetBit(6);
            };
bool get_button_Start(){
                _buttons_1.GetBit(7);
            };
bool get_button_LJ(){
                _buttons_2.GetBit(0);
            };
bool get_button_RJ(){
                _buttons_2.GetBit(1);
            };
float get_lj_x(){
                return other / 0.00787401574;
            };
float get_lj_y(){
                return other / 0.00787401574;
            };
float get_rj_x(){
                return other / 0.00787401574;
            };
float get_rj_y(){
                return other / 0.00787401574;
            };
float get_lt(){
                return other / 0.00787401574;
            };
float get_rt(){
                return other / 0.00787401574;
            };

void set_button_A(bool other){
                _button_A.SetBit(0, other);
            };
void set_button_B(bool other){
                _button_B.SetBit(1, other);
            };
void set_button_X(bool other){
                _button_X.SetBit(2, other);
            };
void set_button_Y(bool other){
                _button_Y.SetBit(3, other);
            };
void set_button_LB(bool other){
                _button_LB.SetBit(4, other);
            };
void set_button_RB(bool other){
                _button_RB.SetBit(5, other);
            };
void set_button_Select(bool other){
                _button_Select.SetBit(6, other);
            };
void set_button_Start(bool other){
                _button_Start.SetBit(7, other);
            };
void set_button_LJ(bool other){
                _button_LJ.SetBit(0, other);
            };
void set_button_RJ(bool other){
                _button_RJ.SetBit(1, other);
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
            

            
            
    };
} // namespace comm

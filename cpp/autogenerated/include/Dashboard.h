#pragma once

#include "DashboardInterface.h"


namespace comm
{
    class Dashboard : public DashboardInterface
    {
        public:
            Dashboard() {

            }
            // Accessors
            uint8 get_enabled_1(){
                _enabled_1 = other;
            };
uint8 get_enabled_2(){
                _enabled_2 = other;
            };
uint8 get_enabled_3(){
                _enabled_3 = other;
            };
uint8 get_enabled_4(){
                _enabled_4 = other;
            };
uint8 get_enabled_5(){
                _enabled_5 = other;
            };
uint8 get_enabled_6(){
                _enabled_6 = other;
            };
uint8 get_enabled_7(){
                _enabled_7 = other;
            };
uint8 get_enabled_8(){
                _enabled_8 = other;
            };
uint8 get_state(){
                _state = other;
            };

void set_enabled_1(uint8 other){
                _enabled_1 = other;
            };
void set_enabled_2(uint8 other){
                _enabled_2 = other;
            };
void set_enabled_3(uint8 other){
                _enabled_3 = other;
            };
void set_enabled_4(uint8 other){
                _enabled_4 = other;
            };
void set_enabled_5(uint8 other){
                _enabled_5 = other;
            };
void set_enabled_6(uint8 other){
                _enabled_6 = other;
            };
void set_enabled_7(uint8 other){
                _enabled_7 = other;
            };
void set_enabled_8(uint8 other){
                _enabled_8 = other;
            };
void set_state(uint8 other){
                _state = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

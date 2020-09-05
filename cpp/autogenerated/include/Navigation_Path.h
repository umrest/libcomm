#pragma once

#include "Navigation_PathInterface.h"
#include "Navigation_LineInterface.h"


namespace comm
{
    class Navigation_Path : public Navigation_PathInterface
    {
        public:
            Navigation_Path() {

            }
            // Accessors
            
            Navigation_Line get_line_0(){
                return _line_0;
            }
            void set_line_0(Navigation_Line val){
                _line_0 = val;
            }
            
            Navigation_Line get_line_1(){
                return _line_1;
            }
            void set_line_1(Navigation_Line val){
                _line_1 = val;
            }
            
            Navigation_Line get_line_2(){
                return _line_2;
            }
            void set_line_2(Navigation_Line val){
                _line_2 = val;
            }
            
            Navigation_Line get_line_3(){
                return _line_3;
            }
            void set_line_3(Navigation_Line val){
                _line_3 = val;
            }
            
            Navigation_Line get_line_4(){
                return _line_4;
            }
            void set_line_4(Navigation_Line val){
                _line_4 = val;
            }
            
            Navigation_Line get_line_5(){
                return _line_5;
            }
            void set_line_5(Navigation_Line val){
                _line_5 = val;
            }
            
            Navigation_Line get_line_6(){
                return _line_6;
            }
            void set_line_6(Navigation_Line val){
                _line_6 = val;
            }
            
            Navigation_Line get_line_7(){
                return _line_7;
            }
            void set_line_7(Navigation_Line val){
                _line_7 = val;
            }
            
            Navigation_Line get_line_8(){
                return _line_8;
            }
            void set_line_8(Navigation_Line val){
                _line_8 = val;
            }
            
            Navigation_Line get_line_9(){
                return _line_9;
            }
            void set_line_9(Navigation_Line val){
                _line_9 = val;
            }
            
            Navigation_Line get_line_10(){
                return _line_10;
            }
            void set_line_10(Navigation_Line val){
                _line_10 = val;
            }
            
            Navigation_Line get_line_11(){
                return _line_11;
            }
            void set_line_11(Navigation_Line val){
                _line_11 = val;
            }
            
            Navigation_Line get_line_12(){
                return _line_12;
            }
            void set_line_12(Navigation_Line val){
                _line_12 = val;
            }
            
            Navigation_Line get_line_13(){
                return _line_13;
            }
            void set_line_13(Navigation_Line val){
                _line_13 = val;
            }
            
            Navigation_Line get_line_14(){
                return _line_14;
            }
            void set_line_14(Navigation_Line val){
                _line_14 = val;
            }
            
            Navigation_Line get_line_15(){
                return _line_15;
            }
            void set_line_15(Navigation_Line val){
                _line_15 = val;
            }
            
            Navigation_Line get_line_16(){
                return _line_16;
            }
            void set_line_16(Navigation_Line val){
                _line_16 = val;
            }
            
            Navigation_Line get_line_17(){
                return _line_17;
            }
            void set_line_17(Navigation_Line val){
                _line_17 = val;
            }
            
            Navigation_Line get_line_18(){
                return _line_18;
            }
            void set_line_18(Navigation_Line val){
                _line_18 = val;
            }
            
            Navigation_Line get_line_19(){
                return _line_19;
            }
            void set_line_19(Navigation_Line val){
                _line_19 = val;
            }
            
            Navigation_Line get_line_20(){
                return _line_20;
            }
            void set_line_20(Navigation_Line val){
                _line_20 = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(200);
                     
            std::vector<uint8_t> __line_0 = _line_0.Serialize();
                    uint8_t* ___line_0= &__line_0[0];
            std::copy(___line_0, ___line_0 + 8, data.begin() + line_0_OFFSET);
            
            std::vector<uint8_t> __line_1 = _line_1.Serialize();
                    uint8_t* ___line_1= &__line_1[0];
            std::copy(___line_1, ___line_1 + 8, data.begin() + line_1_OFFSET);
            
            std::vector<uint8_t> __line_2 = _line_2.Serialize();
                    uint8_t* ___line_2= &__line_2[0];
            std::copy(___line_2, ___line_2 + 8, data.begin() + line_2_OFFSET);
            
            std::vector<uint8_t> __line_3 = _line_3.Serialize();
                    uint8_t* ___line_3= &__line_3[0];
            std::copy(___line_3, ___line_3 + 8, data.begin() + line_3_OFFSET);
            
            std::vector<uint8_t> __line_4 = _line_4.Serialize();
                    uint8_t* ___line_4= &__line_4[0];
            std::copy(___line_4, ___line_4 + 8, data.begin() + line_4_OFFSET);
            
            std::vector<uint8_t> __line_5 = _line_5.Serialize();
                    uint8_t* ___line_5= &__line_5[0];
            std::copy(___line_5, ___line_5 + 8, data.begin() + line_5_OFFSET);
            
            std::vector<uint8_t> __line_6 = _line_6.Serialize();
                    uint8_t* ___line_6= &__line_6[0];
            std::copy(___line_6, ___line_6 + 8, data.begin() + line_6_OFFSET);
            
            std::vector<uint8_t> __line_7 = _line_7.Serialize();
                    uint8_t* ___line_7= &__line_7[0];
            std::copy(___line_7, ___line_7 + 8, data.begin() + line_7_OFFSET);
            
            std::vector<uint8_t> __line_8 = _line_8.Serialize();
                    uint8_t* ___line_8= &__line_8[0];
            std::copy(___line_8, ___line_8 + 8, data.begin() + line_8_OFFSET);
            
            std::vector<uint8_t> __line_9 = _line_9.Serialize();
                    uint8_t* ___line_9= &__line_9[0];
            std::copy(___line_9, ___line_9 + 8, data.begin() + line_9_OFFSET);
            
            std::vector<uint8_t> __line_10 = _line_10.Serialize();
                    uint8_t* ___line_10= &__line_10[0];
            std::copy(___line_10, ___line_10 + 8, data.begin() + line_10_OFFSET);
            
            std::vector<uint8_t> __line_11 = _line_11.Serialize();
                    uint8_t* ___line_11= &__line_11[0];
            std::copy(___line_11, ___line_11 + 8, data.begin() + line_11_OFFSET);
            
            std::vector<uint8_t> __line_12 = _line_12.Serialize();
                    uint8_t* ___line_12= &__line_12[0];
            std::copy(___line_12, ___line_12 + 8, data.begin() + line_12_OFFSET);
            
            std::vector<uint8_t> __line_13 = _line_13.Serialize();
                    uint8_t* ___line_13= &__line_13[0];
            std::copy(___line_13, ___line_13 + 8, data.begin() + line_13_OFFSET);
            
            std::vector<uint8_t> __line_14 = _line_14.Serialize();
                    uint8_t* ___line_14= &__line_14[0];
            std::copy(___line_14, ___line_14 + 8, data.begin() + line_14_OFFSET);
            
            std::vector<uint8_t> __line_15 = _line_15.Serialize();
                    uint8_t* ___line_15= &__line_15[0];
            std::copy(___line_15, ___line_15 + 8, data.begin() + line_15_OFFSET);
            
            std::vector<uint8_t> __line_16 = _line_16.Serialize();
                    uint8_t* ___line_16= &__line_16[0];
            std::copy(___line_16, ___line_16 + 8, data.begin() + line_16_OFFSET);
            
            std::vector<uint8_t> __line_17 = _line_17.Serialize();
                    uint8_t* ___line_17= &__line_17[0];
            std::copy(___line_17, ___line_17 + 8, data.begin() + line_17_OFFSET);
            
            std::vector<uint8_t> __line_18 = _line_18.Serialize();
                    uint8_t* ___line_18= &__line_18[0];
            std::copy(___line_18, ___line_18 + 8, data.begin() + line_18_OFFSET);
            
            std::vector<uint8_t> __line_19 = _line_19.Serialize();
                    uint8_t* ___line_19= &__line_19[0];
            std::copy(___line_19, ___line_19 + 8, data.begin() + line_19_OFFSET);
            
            std::vector<uint8_t> __line_20 = _line_20.Serialize();
                    uint8_t* ___line_20= &__line_20[0];
            std::copy(___line_20, ___line_20 + 8, data.begin() + line_20_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_0_OFFSET, data.begin() + line_0_OFFSET + 8, new_data.begin());
            _line_0.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_1_OFFSET, data.begin() + line_1_OFFSET + 8, new_data.begin());
            _line_1.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_2_OFFSET, data.begin() + line_2_OFFSET + 8, new_data.begin());
            _line_2.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_3_OFFSET, data.begin() + line_3_OFFSET + 8, new_data.begin());
            _line_3.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_4_OFFSET, data.begin() + line_4_OFFSET + 8, new_data.begin());
            _line_4.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_5_OFFSET, data.begin() + line_5_OFFSET + 8, new_data.begin());
            _line_5.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_6_OFFSET, data.begin() + line_6_OFFSET + 8, new_data.begin());
            _line_6.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_7_OFFSET, data.begin() + line_7_OFFSET + 8, new_data.begin());
            _line_7.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_8_OFFSET, data.begin() + line_8_OFFSET + 8, new_data.begin());
            _line_8.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_9_OFFSET, data.begin() + line_9_OFFSET + 8, new_data.begin());
            _line_9.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_10_OFFSET, data.begin() + line_10_OFFSET + 8, new_data.begin());
            _line_10.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_11_OFFSET, data.begin() + line_11_OFFSET + 8, new_data.begin());
            _line_11.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_12_OFFSET, data.begin() + line_12_OFFSET + 8, new_data.begin());
            _line_12.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_13_OFFSET, data.begin() + line_13_OFFSET + 8, new_data.begin());
            _line_13.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_14_OFFSET, data.begin() + line_14_OFFSET + 8, new_data.begin());
            _line_14.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_15_OFFSET, data.begin() + line_15_OFFSET + 8, new_data.begin());
            _line_15.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_16_OFFSET, data.begin() + line_16_OFFSET + 8, new_data.begin());
            _line_16.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_17_OFFSET, data.begin() + line_17_OFFSET + 8, new_data.begin());
            _line_17.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_18_OFFSET, data.begin() + line_18_OFFSET + 8, new_data.begin());
            _line_18.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_19_OFFSET, data.begin() + line_19_OFFSET + 8, new_data.begin());
            _line_19.Deserialize(new_data);
            
         
            new_data.clear();
            new_data.resize(8);
            std::copy(data.begin() + line_20_OFFSET, data.begin() + line_20_OFFSET + 8, new_data.begin());
            _line_20.Deserialize(new_data);
            
                     }
                

            
            
    };
} // namespace comm

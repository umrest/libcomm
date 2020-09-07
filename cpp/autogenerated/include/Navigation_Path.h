#pragma once

#include "Navigation_PathInterface.h"


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
Navigation_Line get_line_1(){
                return _line_1;
            }
Navigation_Line get_line_2(){
                return _line_2;
            }
Navigation_Line get_line_3(){
                return _line_3;
            }
Navigation_Line get_line_4(){
                return _line_4;
            }
Navigation_Line get_line_5(){
                return _line_5;
            }
Navigation_Line get_line_6(){
                return _line_6;
            }
Navigation_Line get_line_7(){
                return _line_7;
            }
Navigation_Line get_line_8(){
                return _line_8;
            }
Navigation_Line get_line_9(){
                return _line_9;
            }
Navigation_Line get_line_10(){
                return _line_10;
            }
Navigation_Line get_line_11(){
                return _line_11;
            }
Navigation_Line get_line_12(){
                return _line_12;
            }
Navigation_Line get_line_13(){
                return _line_13;
            }
Navigation_Line get_line_14(){
                return _line_14;
            }
Navigation_Line get_line_15(){
                return _line_15;
            }
Navigation_Line get_line_16(){
                return _line_16;
            }
Navigation_Line get_line_17(){
                return _line_17;
            }
Navigation_Line get_line_18(){
                return _line_18;
            }
Navigation_Line get_line_19(){
                return _line_19;
            }
Navigation_Line get_line_20(){
                return _line_20;
            }

void set_line_0(Navigation_Line other){
                _line_0 = other;
            };
void set_line_1(Navigation_Line other){
                _line_1 = other;
            };
void set_line_2(Navigation_Line other){
                _line_2 = other;
            };
void set_line_3(Navigation_Line other){
                _line_3 = other;
            };
void set_line_4(Navigation_Line other){
                _line_4 = other;
            };
void set_line_5(Navigation_Line other){
                _line_5 = other;
            };
void set_line_6(Navigation_Line other){
                _line_6 = other;
            };
void set_line_7(Navigation_Line other){
                _line_7 = other;
            };
void set_line_8(Navigation_Line other){
                _line_8 = other;
            };
void set_line_9(Navigation_Line other){
                _line_9 = other;
            };
void set_line_10(Navigation_Line other){
                _line_10 = other;
            };
void set_line_11(Navigation_Line other){
                _line_11 = other;
            };
void set_line_12(Navigation_Line other){
                _line_12 = other;
            };
void set_line_13(Navigation_Line other){
                _line_13 = other;
            };
void set_line_14(Navigation_Line other){
                _line_14 = other;
            };
void set_line_15(Navigation_Line other){
                _line_15 = other;
            };
void set_line_16(Navigation_Line other){
                _line_16 = other;
            };
void set_line_17(Navigation_Line other){
                _line_17 = other;
            };
void set_line_18(Navigation_Line other){
                _line_18 = other;
            };
void set_line_19(Navigation_Line other){
                _line_19 = other;
            };
void set_line_20(Navigation_Line other){
                _line_20 = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(200);
                     
            
            auto ___line_0 = _line_0.Serialize();
            uint8_t* __line_0 = (uint8_t*)&___line_0[0];

            std::copy(__line_0, __line_0 + 8, data.begin() + LINE_0_OFFSET);

            
            auto ___line_1 = _line_1.Serialize();
            uint8_t* __line_1 = (uint8_t*)&___line_1[0];

            std::copy(__line_1, __line_1 + 8, data.begin() + LINE_1_OFFSET);

            
            auto ___line_2 = _line_2.Serialize();
            uint8_t* __line_2 = (uint8_t*)&___line_2[0];

            std::copy(__line_2, __line_2 + 8, data.begin() + LINE_2_OFFSET);

            
            auto ___line_3 = _line_3.Serialize();
            uint8_t* __line_3 = (uint8_t*)&___line_3[0];

            std::copy(__line_3, __line_3 + 8, data.begin() + LINE_3_OFFSET);

            
            auto ___line_4 = _line_4.Serialize();
            uint8_t* __line_4 = (uint8_t*)&___line_4[0];

            std::copy(__line_4, __line_4 + 8, data.begin() + LINE_4_OFFSET);

            
            auto ___line_5 = _line_5.Serialize();
            uint8_t* __line_5 = (uint8_t*)&___line_5[0];

            std::copy(__line_5, __line_5 + 8, data.begin() + LINE_5_OFFSET);

            
            auto ___line_6 = _line_6.Serialize();
            uint8_t* __line_6 = (uint8_t*)&___line_6[0];

            std::copy(__line_6, __line_6 + 8, data.begin() + LINE_6_OFFSET);

            
            auto ___line_7 = _line_7.Serialize();
            uint8_t* __line_7 = (uint8_t*)&___line_7[0];

            std::copy(__line_7, __line_7 + 8, data.begin() + LINE_7_OFFSET);

            
            auto ___line_8 = _line_8.Serialize();
            uint8_t* __line_8 = (uint8_t*)&___line_8[0];

            std::copy(__line_8, __line_8 + 8, data.begin() + LINE_8_OFFSET);

            
            auto ___line_9 = _line_9.Serialize();
            uint8_t* __line_9 = (uint8_t*)&___line_9[0];

            std::copy(__line_9, __line_9 + 8, data.begin() + LINE_9_OFFSET);

            
            auto ___line_10 = _line_10.Serialize();
            uint8_t* __line_10 = (uint8_t*)&___line_10[0];

            std::copy(__line_10, __line_10 + 8, data.begin() + LINE_10_OFFSET);

            
            auto ___line_11 = _line_11.Serialize();
            uint8_t* __line_11 = (uint8_t*)&___line_11[0];

            std::copy(__line_11, __line_11 + 8, data.begin() + LINE_11_OFFSET);

            
            auto ___line_12 = _line_12.Serialize();
            uint8_t* __line_12 = (uint8_t*)&___line_12[0];

            std::copy(__line_12, __line_12 + 8, data.begin() + LINE_12_OFFSET);

            
            auto ___line_13 = _line_13.Serialize();
            uint8_t* __line_13 = (uint8_t*)&___line_13[0];

            std::copy(__line_13, __line_13 + 8, data.begin() + LINE_13_OFFSET);

            
            auto ___line_14 = _line_14.Serialize();
            uint8_t* __line_14 = (uint8_t*)&___line_14[0];

            std::copy(__line_14, __line_14 + 8, data.begin() + LINE_14_OFFSET);

            
            auto ___line_15 = _line_15.Serialize();
            uint8_t* __line_15 = (uint8_t*)&___line_15[0];

            std::copy(__line_15, __line_15 + 8, data.begin() + LINE_15_OFFSET);

            
            auto ___line_16 = _line_16.Serialize();
            uint8_t* __line_16 = (uint8_t*)&___line_16[0];

            std::copy(__line_16, __line_16 + 8, data.begin() + LINE_16_OFFSET);

            
            auto ___line_17 = _line_17.Serialize();
            uint8_t* __line_17 = (uint8_t*)&___line_17[0];

            std::copy(__line_17, __line_17 + 8, data.begin() + LINE_17_OFFSET);

            
            auto ___line_18 = _line_18.Serialize();
            uint8_t* __line_18 = (uint8_t*)&___line_18[0];

            std::copy(__line_18, __line_18 + 8, data.begin() + LINE_18_OFFSET);

            
            auto ___line_19 = _line_19.Serialize();
            uint8_t* __line_19 = (uint8_t*)&___line_19[0];

            std::copy(__line_19, __line_19 + 8, data.begin() + LINE_19_OFFSET);

            
            auto ___line_20 = _line_20.Serialize();
            uint8_t* __line_20 = (uint8_t*)&___line_20[0];

            std::copy(__line_20, __line_20 + 8, data.begin() + LINE_20_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        
            std::vector<uint8_t> __line_0(8);
            std::copy(data.begin() + LINE_0_OFFSET, data.begin() + LINE_0_OFFSET + 8, __line_0.begin());
            _line_0.Deserialize(__line_0);
        
            std::vector<uint8_t> __line_1(8);
            std::copy(data.begin() + LINE_1_OFFSET, data.begin() + LINE_1_OFFSET + 8, __line_1.begin());
            _line_1.Deserialize(__line_1);
        
            std::vector<uint8_t> __line_2(8);
            std::copy(data.begin() + LINE_2_OFFSET, data.begin() + LINE_2_OFFSET + 8, __line_2.begin());
            _line_2.Deserialize(__line_2);
        
            std::vector<uint8_t> __line_3(8);
            std::copy(data.begin() + LINE_3_OFFSET, data.begin() + LINE_3_OFFSET + 8, __line_3.begin());
            _line_3.Deserialize(__line_3);
        
            std::vector<uint8_t> __line_4(8);
            std::copy(data.begin() + LINE_4_OFFSET, data.begin() + LINE_4_OFFSET + 8, __line_4.begin());
            _line_4.Deserialize(__line_4);
        
            std::vector<uint8_t> __line_5(8);
            std::copy(data.begin() + LINE_5_OFFSET, data.begin() + LINE_5_OFFSET + 8, __line_5.begin());
            _line_5.Deserialize(__line_5);
        
            std::vector<uint8_t> __line_6(8);
            std::copy(data.begin() + LINE_6_OFFSET, data.begin() + LINE_6_OFFSET + 8, __line_6.begin());
            _line_6.Deserialize(__line_6);
        
            std::vector<uint8_t> __line_7(8);
            std::copy(data.begin() + LINE_7_OFFSET, data.begin() + LINE_7_OFFSET + 8, __line_7.begin());
            _line_7.Deserialize(__line_7);
        
            std::vector<uint8_t> __line_8(8);
            std::copy(data.begin() + LINE_8_OFFSET, data.begin() + LINE_8_OFFSET + 8, __line_8.begin());
            _line_8.Deserialize(__line_8);
        
            std::vector<uint8_t> __line_9(8);
            std::copy(data.begin() + LINE_9_OFFSET, data.begin() + LINE_9_OFFSET + 8, __line_9.begin());
            _line_9.Deserialize(__line_9);
        
            std::vector<uint8_t> __line_10(8);
            std::copy(data.begin() + LINE_10_OFFSET, data.begin() + LINE_10_OFFSET + 8, __line_10.begin());
            _line_10.Deserialize(__line_10);
        
            std::vector<uint8_t> __line_11(8);
            std::copy(data.begin() + LINE_11_OFFSET, data.begin() + LINE_11_OFFSET + 8, __line_11.begin());
            _line_11.Deserialize(__line_11);
        
            std::vector<uint8_t> __line_12(8);
            std::copy(data.begin() + LINE_12_OFFSET, data.begin() + LINE_12_OFFSET + 8, __line_12.begin());
            _line_12.Deserialize(__line_12);
        
            std::vector<uint8_t> __line_13(8);
            std::copy(data.begin() + LINE_13_OFFSET, data.begin() + LINE_13_OFFSET + 8, __line_13.begin());
            _line_13.Deserialize(__line_13);
        
            std::vector<uint8_t> __line_14(8);
            std::copy(data.begin() + LINE_14_OFFSET, data.begin() + LINE_14_OFFSET + 8, __line_14.begin());
            _line_14.Deserialize(__line_14);
        
            std::vector<uint8_t> __line_15(8);
            std::copy(data.begin() + LINE_15_OFFSET, data.begin() + LINE_15_OFFSET + 8, __line_15.begin());
            _line_15.Deserialize(__line_15);
        
            std::vector<uint8_t> __line_16(8);
            std::copy(data.begin() + LINE_16_OFFSET, data.begin() + LINE_16_OFFSET + 8, __line_16.begin());
            _line_16.Deserialize(__line_16);
        
            std::vector<uint8_t> __line_17(8);
            std::copy(data.begin() + LINE_17_OFFSET, data.begin() + LINE_17_OFFSET + 8, __line_17.begin());
            _line_17.Deserialize(__line_17);
        
            std::vector<uint8_t> __line_18(8);
            std::copy(data.begin() + LINE_18_OFFSET, data.begin() + LINE_18_OFFSET + 8, __line_18.begin());
            _line_18.Deserialize(__line_18);
        
            std::vector<uint8_t> __line_19(8);
            std::copy(data.begin() + LINE_19_OFFSET, data.begin() + LINE_19_OFFSET + 8, __line_19.begin());
            _line_19.Deserialize(__line_19);
        
            std::vector<uint8_t> __line_20(8);
            std::copy(data.begin() + LINE_20_OFFSET, data.begin() + LINE_20_OFFSET + 8, __line_20.begin());
            _line_20.Deserialize(__line_20);}
        

            
            
    };
} // namespace comm

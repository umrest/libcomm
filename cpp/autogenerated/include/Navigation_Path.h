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
            Navigation_Point get_point_0(){
                return _point_0;
            }
Navigation_Point get_point_1(){
                return _point_1;
            }
Navigation_Point get_point_2(){
                return _point_2;
            }
Navigation_Point get_point_3(){
                return _point_3;
            }
Navigation_Point get_point_4(){
                return _point_4;
            }
Navigation_Point get_point_5(){
                return _point_5;
            }
Navigation_Point get_point_6(){
                return _point_6;
            }
Navigation_Point get_point_7(){
                return _point_7;
            }
Navigation_Point get_point_8(){
                return _point_8;
            }
Navigation_Point get_point_9(){
                return _point_9;
            }
Navigation_Point get_point_10(){
                return _point_10;
            }
Navigation_Point get_point_11(){
                return _point_11;
            }
Navigation_Point get_point_12(){
                return _point_12;
            }
Navigation_Point get_point_13(){
                return _point_13;
            }
Navigation_Point get_point_14(){
                return _point_14;
            }
Navigation_Point get_point_15(){
                return _point_15;
            }
Navigation_Point get_point_16(){
                return _point_16;
            }
Navigation_Point get_point_17(){
                return _point_17;
            }
Navigation_Point get_point_18(){
                return _point_18;
            }
Navigation_Point get_point_19(){
                return _point_19;
            }
Navigation_Point get_point_20(){
                return _point_20;
            }

void set_point_0(Navigation_Point other){
                _point_0 = other;
            };
void set_point_1(Navigation_Point other){
                _point_1 = other;
            };
void set_point_2(Navigation_Point other){
                _point_2 = other;
            };
void set_point_3(Navigation_Point other){
                _point_3 = other;
            };
void set_point_4(Navigation_Point other){
                _point_4 = other;
            };
void set_point_5(Navigation_Point other){
                _point_5 = other;
            };
void set_point_6(Navigation_Point other){
                _point_6 = other;
            };
void set_point_7(Navigation_Point other){
                _point_7 = other;
            };
void set_point_8(Navigation_Point other){
                _point_8 = other;
            };
void set_point_9(Navigation_Point other){
                _point_9 = other;
            };
void set_point_10(Navigation_Point other){
                _point_10 = other;
            };
void set_point_11(Navigation_Point other){
                _point_11 = other;
            };
void set_point_12(Navigation_Point other){
                _point_12 = other;
            };
void set_point_13(Navigation_Point other){
                _point_13 = other;
            };
void set_point_14(Navigation_Point other){
                _point_14 = other;
            };
void set_point_15(Navigation_Point other){
                _point_15 = other;
            };
void set_point_16(Navigation_Point other){
                _point_16 = other;
            };
void set_point_17(Navigation_Point other){
                _point_17 = other;
            };
void set_point_18(Navigation_Point other){
                _point_18 = other;
            };
void set_point_19(Navigation_Point other){
                _point_19 = other;
            };
void set_point_20(Navigation_Point other){
                _point_20 = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(200);
                     
            
            auto ___point_0 = _point_0.Serialize();
            uint8_t* __point_0 = (uint8_t*)&___point_0[0];

            std::copy(__point_0, __point_0 + 4, data.begin() + POINT_0_OFFSET);

            
            auto ___point_1 = _point_1.Serialize();
            uint8_t* __point_1 = (uint8_t*)&___point_1[0];

            std::copy(__point_1, __point_1 + 4, data.begin() + POINT_1_OFFSET);

            
            auto ___point_2 = _point_2.Serialize();
            uint8_t* __point_2 = (uint8_t*)&___point_2[0];

            std::copy(__point_2, __point_2 + 4, data.begin() + POINT_2_OFFSET);

            
            auto ___point_3 = _point_3.Serialize();
            uint8_t* __point_3 = (uint8_t*)&___point_3[0];

            std::copy(__point_3, __point_3 + 4, data.begin() + POINT_3_OFFSET);

            
            auto ___point_4 = _point_4.Serialize();
            uint8_t* __point_4 = (uint8_t*)&___point_4[0];

            std::copy(__point_4, __point_4 + 4, data.begin() + POINT_4_OFFSET);

            
            auto ___point_5 = _point_5.Serialize();
            uint8_t* __point_5 = (uint8_t*)&___point_5[0];

            std::copy(__point_5, __point_5 + 4, data.begin() + POINT_5_OFFSET);

            
            auto ___point_6 = _point_6.Serialize();
            uint8_t* __point_6 = (uint8_t*)&___point_6[0];

            std::copy(__point_6, __point_6 + 4, data.begin() + POINT_6_OFFSET);

            
            auto ___point_7 = _point_7.Serialize();
            uint8_t* __point_7 = (uint8_t*)&___point_7[0];

            std::copy(__point_7, __point_7 + 4, data.begin() + POINT_7_OFFSET);

            
            auto ___point_8 = _point_8.Serialize();
            uint8_t* __point_8 = (uint8_t*)&___point_8[0];

            std::copy(__point_8, __point_8 + 4, data.begin() + POINT_8_OFFSET);

            
            auto ___point_9 = _point_9.Serialize();
            uint8_t* __point_9 = (uint8_t*)&___point_9[0];

            std::copy(__point_9, __point_9 + 4, data.begin() + POINT_9_OFFSET);

            
            auto ___point_10 = _point_10.Serialize();
            uint8_t* __point_10 = (uint8_t*)&___point_10[0];

            std::copy(__point_10, __point_10 + 4, data.begin() + POINT_10_OFFSET);

            
            auto ___point_11 = _point_11.Serialize();
            uint8_t* __point_11 = (uint8_t*)&___point_11[0];

            std::copy(__point_11, __point_11 + 4, data.begin() + POINT_11_OFFSET);

            
            auto ___point_12 = _point_12.Serialize();
            uint8_t* __point_12 = (uint8_t*)&___point_12[0];

            std::copy(__point_12, __point_12 + 4, data.begin() + POINT_12_OFFSET);

            
            auto ___point_13 = _point_13.Serialize();
            uint8_t* __point_13 = (uint8_t*)&___point_13[0];

            std::copy(__point_13, __point_13 + 4, data.begin() + POINT_13_OFFSET);

            
            auto ___point_14 = _point_14.Serialize();
            uint8_t* __point_14 = (uint8_t*)&___point_14[0];

            std::copy(__point_14, __point_14 + 4, data.begin() + POINT_14_OFFSET);

            
            auto ___point_15 = _point_15.Serialize();
            uint8_t* __point_15 = (uint8_t*)&___point_15[0];

            std::copy(__point_15, __point_15 + 4, data.begin() + POINT_15_OFFSET);

            
            auto ___point_16 = _point_16.Serialize();
            uint8_t* __point_16 = (uint8_t*)&___point_16[0];

            std::copy(__point_16, __point_16 + 4, data.begin() + POINT_16_OFFSET);

            
            auto ___point_17 = _point_17.Serialize();
            uint8_t* __point_17 = (uint8_t*)&___point_17[0];

            std::copy(__point_17, __point_17 + 4, data.begin() + POINT_17_OFFSET);

            
            auto ___point_18 = _point_18.Serialize();
            uint8_t* __point_18 = (uint8_t*)&___point_18[0];

            std::copy(__point_18, __point_18 + 4, data.begin() + POINT_18_OFFSET);

            
            auto ___point_19 = _point_19.Serialize();
            uint8_t* __point_19 = (uint8_t*)&___point_19[0];

            std::copy(__point_19, __point_19 + 4, data.begin() + POINT_19_OFFSET);

            
            auto ___point_20 = _point_20.Serialize();
            uint8_t* __point_20 = (uint8_t*)&___point_20[0];

            std::copy(__point_20, __point_20 + 4, data.begin() + POINT_20_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
        
            std::vector<uint8_t> __point_0(4);
            std::copy(data.begin() + POINT_0_OFFSET, data.begin() + POINT_0_OFFSET + 4, __point_0.begin());
            _point_0.Deserialize(__point_0);
        
            std::vector<uint8_t> __point_1(4);
            std::copy(data.begin() + POINT_1_OFFSET, data.begin() + POINT_1_OFFSET + 4, __point_1.begin());
            _point_1.Deserialize(__point_1);
        
            std::vector<uint8_t> __point_2(4);
            std::copy(data.begin() + POINT_2_OFFSET, data.begin() + POINT_2_OFFSET + 4, __point_2.begin());
            _point_2.Deserialize(__point_2);
        
            std::vector<uint8_t> __point_3(4);
            std::copy(data.begin() + POINT_3_OFFSET, data.begin() + POINT_3_OFFSET + 4, __point_3.begin());
            _point_3.Deserialize(__point_3);
        
            std::vector<uint8_t> __point_4(4);
            std::copy(data.begin() + POINT_4_OFFSET, data.begin() + POINT_4_OFFSET + 4, __point_4.begin());
            _point_4.Deserialize(__point_4);
        
            std::vector<uint8_t> __point_5(4);
            std::copy(data.begin() + POINT_5_OFFSET, data.begin() + POINT_5_OFFSET + 4, __point_5.begin());
            _point_5.Deserialize(__point_5);
        
            std::vector<uint8_t> __point_6(4);
            std::copy(data.begin() + POINT_6_OFFSET, data.begin() + POINT_6_OFFSET + 4, __point_6.begin());
            _point_6.Deserialize(__point_6);
        
            std::vector<uint8_t> __point_7(4);
            std::copy(data.begin() + POINT_7_OFFSET, data.begin() + POINT_7_OFFSET + 4, __point_7.begin());
            _point_7.Deserialize(__point_7);
        
            std::vector<uint8_t> __point_8(4);
            std::copy(data.begin() + POINT_8_OFFSET, data.begin() + POINT_8_OFFSET + 4, __point_8.begin());
            _point_8.Deserialize(__point_8);
        
            std::vector<uint8_t> __point_9(4);
            std::copy(data.begin() + POINT_9_OFFSET, data.begin() + POINT_9_OFFSET + 4, __point_9.begin());
            _point_9.Deserialize(__point_9);
        
            std::vector<uint8_t> __point_10(4);
            std::copy(data.begin() + POINT_10_OFFSET, data.begin() + POINT_10_OFFSET + 4, __point_10.begin());
            _point_10.Deserialize(__point_10);
        
            std::vector<uint8_t> __point_11(4);
            std::copy(data.begin() + POINT_11_OFFSET, data.begin() + POINT_11_OFFSET + 4, __point_11.begin());
            _point_11.Deserialize(__point_11);
        
            std::vector<uint8_t> __point_12(4);
            std::copy(data.begin() + POINT_12_OFFSET, data.begin() + POINT_12_OFFSET + 4, __point_12.begin());
            _point_12.Deserialize(__point_12);
        
            std::vector<uint8_t> __point_13(4);
            std::copy(data.begin() + POINT_13_OFFSET, data.begin() + POINT_13_OFFSET + 4, __point_13.begin());
            _point_13.Deserialize(__point_13);
        
            std::vector<uint8_t> __point_14(4);
            std::copy(data.begin() + POINT_14_OFFSET, data.begin() + POINT_14_OFFSET + 4, __point_14.begin());
            _point_14.Deserialize(__point_14);
        
            std::vector<uint8_t> __point_15(4);
            std::copy(data.begin() + POINT_15_OFFSET, data.begin() + POINT_15_OFFSET + 4, __point_15.begin());
            _point_15.Deserialize(__point_15);
        
            std::vector<uint8_t> __point_16(4);
            std::copy(data.begin() + POINT_16_OFFSET, data.begin() + POINT_16_OFFSET + 4, __point_16.begin());
            _point_16.Deserialize(__point_16);
        
            std::vector<uint8_t> __point_17(4);
            std::copy(data.begin() + POINT_17_OFFSET, data.begin() + POINT_17_OFFSET + 4, __point_17.begin());
            _point_17.Deserialize(__point_17);
        
            std::vector<uint8_t> __point_18(4);
            std::copy(data.begin() + POINT_18_OFFSET, data.begin() + POINT_18_OFFSET + 4, __point_18.begin());
            _point_18.Deserialize(__point_18);
        
            std::vector<uint8_t> __point_19(4);
            std::copy(data.begin() + POINT_19_OFFSET, data.begin() + POINT_19_OFFSET + 4, __point_19.begin());
            _point_19.Deserialize(__point_19);
        
            std::vector<uint8_t> __point_20(4);
            std::copy(data.begin() + POINT_20_OFFSET, data.begin() + POINT_20_OFFSET + 4, __point_20.begin());
            _point_20.Deserialize(__point_20);}
        

            
            
    };
} // namespace comm

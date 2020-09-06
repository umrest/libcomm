using System;

using comm;

namespace comm
{
    class Navigation_Path : Navigation_PathInterface
    {
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
            }
void set_line_1(Navigation_Line other){
                _line_1 = other;
            }
void set_line_2(Navigation_Line other){
                _line_2 = other;
            }
void set_line_3(Navigation_Line other){
                _line_3 = other;
            }
void set_line_4(Navigation_Line other){
                _line_4 = other;
            }
void set_line_5(Navigation_Line other){
                _line_5 = other;
            }
void set_line_6(Navigation_Line other){
                _line_6 = other;
            }
void set_line_7(Navigation_Line other){
                _line_7 = other;
            }
void set_line_8(Navigation_Line other){
                _line_8 = other;
            }
void set_line_9(Navigation_Line other){
                _line_9 = other;
            }
void set_line_10(Navigation_Line other){
                _line_10 = other;
            }
void set_line_11(Navigation_Line other){
                _line_11 = other;
            }
void set_line_12(Navigation_Line other){
                _line_12 = other;
            }
void set_line_13(Navigation_Line other){
                _line_13 = other;
            }
void set_line_14(Navigation_Line other){
                _line_14 = other;
            }
void set_line_15(Navigation_Line other){
                _line_15 = other;
            }
void set_line_16(Navigation_Line other){
                _line_16 = other;
            }
void set_line_17(Navigation_Line other){
                _line_17 = other;
            }
void set_line_18(Navigation_Line other){
                _line_18 = other;
            }
void set_line_19(Navigation_Line other){
                _line_19 = other;
            }
void set_line_20(Navigation_Line other){
                _line_20 = other;
            }

            
            // Serializers
            byte[] Serialize() {
                     byte[] data = new byte[200];
                     
            
            return _line_0.Serialize();
            
            return _line_1.Serialize();
            
            return _line_2.Serialize();
            
            return _line_3.Serialize();
            
            return _line_4.Serialize();
            
            return _line_5.Serialize();
            
            return _line_6.Serialize();
            
            return _line_7.Serialize();
            
            return _line_8.Serialize();
            
            return _line_9.Serialize();
            
            return _line_10.Serialize();
            
            return _line_11.Serialize();
            
            return _line_12.Serialize();
            
            return _line_13.Serialize();
            
            return _line_14.Serialize();
            
            return _line_15.Serialize();
            
            return _line_16.Serialize();
            
            return _line_17.Serialize();
            
            return _line_18.Serialize();
            
            return _line_19.Serialize();
            
            return _line_20.Serialize();
        return data;
        }
        void Deserialize(byte[] data)  {
         byte[] new_data;
        
            byte[] __line_0[8];
            Array.Copy(data, LINE_0_OFFSET, __line_0, 0, 8);
            _line_0.Deserialize(__line_0);
        
            byte[] __line_1[8];
            Array.Copy(data, LINE_1_OFFSET, __line_1, 0, 8);
            _line_1.Deserialize(__line_1);
        
            byte[] __line_2[8];
            Array.Copy(data, LINE_2_OFFSET, __line_2, 0, 8);
            _line_2.Deserialize(__line_2);
        
            byte[] __line_3[8];
            Array.Copy(data, LINE_3_OFFSET, __line_3, 0, 8);
            _line_3.Deserialize(__line_3);
        
            byte[] __line_4[8];
            Array.Copy(data, LINE_4_OFFSET, __line_4, 0, 8);
            _line_4.Deserialize(__line_4);
        
            byte[] __line_5[8];
            Array.Copy(data, LINE_5_OFFSET, __line_5, 0, 8);
            _line_5.Deserialize(__line_5);
        
            byte[] __line_6[8];
            Array.Copy(data, LINE_6_OFFSET, __line_6, 0, 8);
            _line_6.Deserialize(__line_6);
        
            byte[] __line_7[8];
            Array.Copy(data, LINE_7_OFFSET, __line_7, 0, 8);
            _line_7.Deserialize(__line_7);
        
            byte[] __line_8[8];
            Array.Copy(data, LINE_8_OFFSET, __line_8, 0, 8);
            _line_8.Deserialize(__line_8);
        
            byte[] __line_9[8];
            Array.Copy(data, LINE_9_OFFSET, __line_9, 0, 8);
            _line_9.Deserialize(__line_9);
        
            byte[] __line_10[8];
            Array.Copy(data, LINE_10_OFFSET, __line_10, 0, 8);
            _line_10.Deserialize(__line_10);
        
            byte[] __line_11[8];
            Array.Copy(data, LINE_11_OFFSET, __line_11, 0, 8);
            _line_11.Deserialize(__line_11);
        
            byte[] __line_12[8];
            Array.Copy(data, LINE_12_OFFSET, __line_12, 0, 8);
            _line_12.Deserialize(__line_12);
        
            byte[] __line_13[8];
            Array.Copy(data, LINE_13_OFFSET, __line_13, 0, 8);
            _line_13.Deserialize(__line_13);
        
            byte[] __line_14[8];
            Array.Copy(data, LINE_14_OFFSET, __line_14, 0, 8);
            _line_14.Deserialize(__line_14);
        
            byte[] __line_15[8];
            Array.Copy(data, LINE_15_OFFSET, __line_15, 0, 8);
            _line_15.Deserialize(__line_15);
        
            byte[] __line_16[8];
            Array.Copy(data, LINE_16_OFFSET, __line_16, 0, 8);
            _line_16.Deserialize(__line_16);
        
            byte[] __line_17[8];
            Array.Copy(data, LINE_17_OFFSET, __line_17, 0, 8);
            _line_17.Deserialize(__line_17);
        
            byte[] __line_18[8];
            Array.Copy(data, LINE_18_OFFSET, __line_18, 0, 8);
            _line_18.Deserialize(__line_18);
        
            byte[] __line_19[8];
            Array.Copy(data, LINE_19_OFFSET, __line_19, 0, 8);
            _line_19.Deserialize(__line_19);
        
            byte[] __line_20[8];
            Array.Copy(data, LINE_20_OFFSET, __line_20, 0, 8);
            _line_20.Deserialize(__line_20);}
        

            
            
    };
} // namespace comm

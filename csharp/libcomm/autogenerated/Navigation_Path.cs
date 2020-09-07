using System;

using comm;

namespace comm
{
    public class Navigation_Path : Navigation_PathInterface
    {
            public Navigation_Path() {

            }
            // Accessors
            public Navigation_Point get_point_0(){
                return _point_0;
            }
public Navigation_Point get_point_1(){
                return _point_1;
            }
public Navigation_Point get_point_2(){
                return _point_2;
            }
public Navigation_Point get_point_3(){
                return _point_3;
            }
public Navigation_Point get_point_4(){
                return _point_4;
            }
public Navigation_Point get_point_5(){
                return _point_5;
            }
public Navigation_Point get_point_6(){
                return _point_6;
            }
public Navigation_Point get_point_7(){
                return _point_7;
            }
public Navigation_Point get_point_8(){
                return _point_8;
            }
public Navigation_Point get_point_9(){
                return _point_9;
            }
public Navigation_Point get_point_10(){
                return _point_10;
            }
public Navigation_Point get_point_11(){
                return _point_11;
            }
public Navigation_Point get_point_12(){
                return _point_12;
            }
public Navigation_Point get_point_13(){
                return _point_13;
            }
public Navigation_Point get_point_14(){
                return _point_14;
            }
public Navigation_Point get_point_15(){
                return _point_15;
            }
public Navigation_Point get_point_16(){
                return _point_16;
            }
public Navigation_Point get_point_17(){
                return _point_17;
            }
public Navigation_Point get_point_18(){
                return _point_18;
            }
public Navigation_Point get_point_19(){
                return _point_19;
            }
public Navigation_Point get_point_20(){
                return _point_20;
            }

public void set_point_0(Navigation_Point other){
                _point_0 = other;
            }
public void set_point_1(Navigation_Point other){
                _point_1 = other;
            }
public void set_point_2(Navigation_Point other){
                _point_2 = other;
            }
public void set_point_3(Navigation_Point other){
                _point_3 = other;
            }
public void set_point_4(Navigation_Point other){
                _point_4 = other;
            }
public void set_point_5(Navigation_Point other){
                _point_5 = other;
            }
public void set_point_6(Navigation_Point other){
                _point_6 = other;
            }
public void set_point_7(Navigation_Point other){
                _point_7 = other;
            }
public void set_point_8(Navigation_Point other){
                _point_8 = other;
            }
public void set_point_9(Navigation_Point other){
                _point_9 = other;
            }
public void set_point_10(Navigation_Point other){
                _point_10 = other;
            }
public void set_point_11(Navigation_Point other){
                _point_11 = other;
            }
public void set_point_12(Navigation_Point other){
                _point_12 = other;
            }
public void set_point_13(Navigation_Point other){
                _point_13 = other;
            }
public void set_point_14(Navigation_Point other){
                _point_14 = other;
            }
public void set_point_15(Navigation_Point other){
                _point_15 = other;
            }
public void set_point_16(Navigation_Point other){
                _point_16 = other;
            }
public void set_point_17(Navigation_Point other){
                _point_17 = other;
            }
public void set_point_18(Navigation_Point other){
                _point_18 = other;
            }
public void set_point_19(Navigation_Point other){
                _point_19 = other;
            }
public void set_point_20(Navigation_Point other){
                _point_20 = other;
            }

            
            // Serializers
            public override byte[] Serialize() {
                     byte[] data = new byte[200];
                     
            
            byte[] ___point_0 = _point_0.Serialize();
            Array.Copy(___point_0, 0, data, POINT_0_OFFSET, 4);
            
            byte[] ___point_1 = _point_1.Serialize();
            Array.Copy(___point_1, 0, data, POINT_1_OFFSET, 4);
            
            byte[] ___point_2 = _point_2.Serialize();
            Array.Copy(___point_2, 0, data, POINT_2_OFFSET, 4);
            
            byte[] ___point_3 = _point_3.Serialize();
            Array.Copy(___point_3, 0, data, POINT_3_OFFSET, 4);
            
            byte[] ___point_4 = _point_4.Serialize();
            Array.Copy(___point_4, 0, data, POINT_4_OFFSET, 4);
            
            byte[] ___point_5 = _point_5.Serialize();
            Array.Copy(___point_5, 0, data, POINT_5_OFFSET, 4);
            
            byte[] ___point_6 = _point_6.Serialize();
            Array.Copy(___point_6, 0, data, POINT_6_OFFSET, 4);
            
            byte[] ___point_7 = _point_7.Serialize();
            Array.Copy(___point_7, 0, data, POINT_7_OFFSET, 4);
            
            byte[] ___point_8 = _point_8.Serialize();
            Array.Copy(___point_8, 0, data, POINT_8_OFFSET, 4);
            
            byte[] ___point_9 = _point_9.Serialize();
            Array.Copy(___point_9, 0, data, POINT_9_OFFSET, 4);
            
            byte[] ___point_10 = _point_10.Serialize();
            Array.Copy(___point_10, 0, data, POINT_10_OFFSET, 4);
            
            byte[] ___point_11 = _point_11.Serialize();
            Array.Copy(___point_11, 0, data, POINT_11_OFFSET, 4);
            
            byte[] ___point_12 = _point_12.Serialize();
            Array.Copy(___point_12, 0, data, POINT_12_OFFSET, 4);
            
            byte[] ___point_13 = _point_13.Serialize();
            Array.Copy(___point_13, 0, data, POINT_13_OFFSET, 4);
            
            byte[] ___point_14 = _point_14.Serialize();
            Array.Copy(___point_14, 0, data, POINT_14_OFFSET, 4);
            
            byte[] ___point_15 = _point_15.Serialize();
            Array.Copy(___point_15, 0, data, POINT_15_OFFSET, 4);
            
            byte[] ___point_16 = _point_16.Serialize();
            Array.Copy(___point_16, 0, data, POINT_16_OFFSET, 4);
            
            byte[] ___point_17 = _point_17.Serialize();
            Array.Copy(___point_17, 0, data, POINT_17_OFFSET, 4);
            
            byte[] ___point_18 = _point_18.Serialize();
            Array.Copy(___point_18, 0, data, POINT_18_OFFSET, 4);
            
            byte[] ___point_19 = _point_19.Serialize();
            Array.Copy(___point_19, 0, data, POINT_19_OFFSET, 4);
            
            byte[] ___point_20 = _point_20.Serialize();
            Array.Copy(___point_20, 0, data, POINT_20_OFFSET, 4);
        return data;
        }
        public override void Deserialize(byte[] data)  {
        
            byte[] __point_0 = new byte[4];
            Array.Copy(data, POINT_0_OFFSET, __point_0, 0, 4);
            _point_0.Deserialize(__point_0);
        
            byte[] __point_1 = new byte[4];
            Array.Copy(data, POINT_1_OFFSET, __point_1, 0, 4);
            _point_1.Deserialize(__point_1);
        
            byte[] __point_2 = new byte[4];
            Array.Copy(data, POINT_2_OFFSET, __point_2, 0, 4);
            _point_2.Deserialize(__point_2);
        
            byte[] __point_3 = new byte[4];
            Array.Copy(data, POINT_3_OFFSET, __point_3, 0, 4);
            _point_3.Deserialize(__point_3);
        
            byte[] __point_4 = new byte[4];
            Array.Copy(data, POINT_4_OFFSET, __point_4, 0, 4);
            _point_4.Deserialize(__point_4);
        
            byte[] __point_5 = new byte[4];
            Array.Copy(data, POINT_5_OFFSET, __point_5, 0, 4);
            _point_5.Deserialize(__point_5);
        
            byte[] __point_6 = new byte[4];
            Array.Copy(data, POINT_6_OFFSET, __point_6, 0, 4);
            _point_6.Deserialize(__point_6);
        
            byte[] __point_7 = new byte[4];
            Array.Copy(data, POINT_7_OFFSET, __point_7, 0, 4);
            _point_7.Deserialize(__point_7);
        
            byte[] __point_8 = new byte[4];
            Array.Copy(data, POINT_8_OFFSET, __point_8, 0, 4);
            _point_8.Deserialize(__point_8);
        
            byte[] __point_9 = new byte[4];
            Array.Copy(data, POINT_9_OFFSET, __point_9, 0, 4);
            _point_9.Deserialize(__point_9);
        
            byte[] __point_10 = new byte[4];
            Array.Copy(data, POINT_10_OFFSET, __point_10, 0, 4);
            _point_10.Deserialize(__point_10);
        
            byte[] __point_11 = new byte[4];
            Array.Copy(data, POINT_11_OFFSET, __point_11, 0, 4);
            _point_11.Deserialize(__point_11);
        
            byte[] __point_12 = new byte[4];
            Array.Copy(data, POINT_12_OFFSET, __point_12, 0, 4);
            _point_12.Deserialize(__point_12);
        
            byte[] __point_13 = new byte[4];
            Array.Copy(data, POINT_13_OFFSET, __point_13, 0, 4);
            _point_13.Deserialize(__point_13);
        
            byte[] __point_14 = new byte[4];
            Array.Copy(data, POINT_14_OFFSET, __point_14, 0, 4);
            _point_14.Deserialize(__point_14);
        
            byte[] __point_15 = new byte[4];
            Array.Copy(data, POINT_15_OFFSET, __point_15, 0, 4);
            _point_15.Deserialize(__point_15);
        
            byte[] __point_16 = new byte[4];
            Array.Copy(data, POINT_16_OFFSET, __point_16, 0, 4);
            _point_16.Deserialize(__point_16);
        
            byte[] __point_17 = new byte[4];
            Array.Copy(data, POINT_17_OFFSET, __point_17, 0, 4);
            _point_17.Deserialize(__point_17);
        
            byte[] __point_18 = new byte[4];
            Array.Copy(data, POINT_18_OFFSET, __point_18, 0, 4);
            _point_18.Deserialize(__point_18);
        
            byte[] __point_19 = new byte[4];
            Array.Copy(data, POINT_19_OFFSET, __point_19, 0, 4);
            _point_19.Deserialize(__point_19);
        
            byte[] __point_20 = new byte[4];
            Array.Copy(data, POINT_20_OFFSET, __point_20, 0, 4);
            _point_20.Deserialize(__point_20);}
        

            
            
    };
} // namespace comm

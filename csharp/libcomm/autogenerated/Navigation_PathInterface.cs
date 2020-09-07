using System;

using comm;

namespace comm
{
public abstract class Navigation_PathInterface : RESTPacket{
    public Navigation_PathInterface()
    {

    }

           // Variables
    protected Navigation_Point _point_0 = new Navigation_Point();
protected Navigation_Point _point_1 = new Navigation_Point();
protected Navigation_Point _point_2 = new Navigation_Point();
protected Navigation_Point _point_3 = new Navigation_Point();
protected Navigation_Point _point_4 = new Navigation_Point();
protected Navigation_Point _point_5 = new Navigation_Point();
protected Navigation_Point _point_6 = new Navigation_Point();
protected Navigation_Point _point_7 = new Navigation_Point();
protected Navigation_Point _point_8 = new Navigation_Point();
protected Navigation_Point _point_9 = new Navigation_Point();
protected Navigation_Point _point_10 = new Navigation_Point();
protected Navigation_Point _point_11 = new Navigation_Point();
protected Navigation_Point _point_12 = new Navigation_Point();
protected Navigation_Point _point_13 = new Navigation_Point();
protected Navigation_Point _point_14 = new Navigation_Point();
protected Navigation_Point _point_15 = new Navigation_Point();
protected Navigation_Point _point_16 = new Navigation_Point();
protected Navigation_Point _point_17 = new Navigation_Point();
protected Navigation_Point _point_18 = new Navigation_Point();
protected Navigation_Point _point_19 = new Navigation_Point();
protected Navigation_Point _point_20 = new Navigation_Point();


    // Offsets
    protected int POINT_0_OFFSET = 0;
protected int POINT_1_OFFSET = 4;
protected int POINT_2_OFFSET = 8;
protected int POINT_3_OFFSET = 12;
protected int POINT_4_OFFSET = 16;
protected int POINT_5_OFFSET = 20;
protected int POINT_6_OFFSET = 24;
protected int POINT_7_OFFSET = 28;
protected int POINT_8_OFFSET = 32;
protected int POINT_9_OFFSET = 36;
protected int POINT_10_OFFSET = 40;
protected int POINT_11_OFFSET = 44;
protected int POINT_12_OFFSET = 48;
protected int POINT_13_OFFSET = 52;
protected int POINT_14_OFFSET = 56;
protected int POINT_15_OFFSET = 60;
protected int POINT_16_OFFSET = 64;
protected int POINT_17_OFFSET = 68;
protected int POINT_18_OFFSET = 72;
protected int POINT_19_OFFSET = 76;
protected int POINT_20_OFFSET = 80;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.NAVIGATION_PATH; }
    
};
} // namespace comm
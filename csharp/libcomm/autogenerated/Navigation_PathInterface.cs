using System;

using comm;

namespace comm
{
public abstract class Navigation_PathInterface : RESTPacket{
    public Navigation_PathInterface()
    {

    }

           // Variables
    protected Navigation_Line _line_0 = new Navigation_Line();
protected Navigation_Line _line_1 = new Navigation_Line();
protected Navigation_Line _line_2 = new Navigation_Line();
protected Navigation_Line _line_3 = new Navigation_Line();
protected Navigation_Line _line_4 = new Navigation_Line();
protected Navigation_Line _line_5 = new Navigation_Line();
protected Navigation_Line _line_6 = new Navigation_Line();
protected Navigation_Line _line_7 = new Navigation_Line();
protected Navigation_Line _line_8 = new Navigation_Line();
protected Navigation_Line _line_9 = new Navigation_Line();
protected Navigation_Line _line_10 = new Navigation_Line();
protected Navigation_Line _line_11 = new Navigation_Line();
protected Navigation_Line _line_12 = new Navigation_Line();
protected Navigation_Line _line_13 = new Navigation_Line();
protected Navigation_Line _line_14 = new Navigation_Line();
protected Navigation_Line _line_15 = new Navigation_Line();
protected Navigation_Line _line_16 = new Navigation_Line();
protected Navigation_Line _line_17 = new Navigation_Line();
protected Navigation_Line _line_18 = new Navigation_Line();
protected Navigation_Line _line_19 = new Navigation_Line();
protected Navigation_Line _line_20 = new Navigation_Line();


    // Offsets
    protected int LINE_0_OFFSET = 0;
protected int LINE_1_OFFSET = 8;
protected int LINE_2_OFFSET = 16;
protected int LINE_3_OFFSET = 24;
protected int LINE_4_OFFSET = 32;
protected int LINE_5_OFFSET = 40;
protected int LINE_6_OFFSET = 48;
protected int LINE_7_OFFSET = 56;
protected int LINE_8_OFFSET = 64;
protected int LINE_9_OFFSET = 72;
protected int LINE_10_OFFSET = 80;
protected int LINE_11_OFFSET = 88;
protected int LINE_12_OFFSET = 96;
protected int LINE_13_OFFSET = 104;
protected int LINE_14_OFFSET = 112;
protected int LINE_15_OFFSET = 120;
protected int LINE_16_OFFSET = 128;
protected int LINE_17_OFFSET = 136;
protected int LINE_18_OFFSET = 144;
protected int LINE_19_OFFSET = 152;
protected int LINE_20_OFFSET = 160;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.NAVIGATION_PATH; }
    
};
} // namespace comm
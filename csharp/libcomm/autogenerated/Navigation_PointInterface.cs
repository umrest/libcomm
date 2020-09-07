using System;

using comm;

namespace comm
{
public abstract class Navigation_PointInterface : RESTPacket{
    public Navigation_PointInterface()
    {

    }

           // Variables
    protected Int16 _x = new Int16();
protected Int16 _y = new Int16();


    // Offsets
    protected int X_OFFSET = 0;
protected int Y_OFFSET = 2;


    // Type
    public override CommunicationDefinitions.TYPE type(){{ return 0; }}
    
};
} // namespace comm
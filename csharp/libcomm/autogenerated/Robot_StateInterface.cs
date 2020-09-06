using System;

using comm;

namespace comm
{
public abstract class Robot_StateInterface : RESTPacket{
    public Robot_StateInterface()
    {

    }

           // Variables
    protected byte _state = new byte();


    // Offsets
    protected int STATE_OFFSET = 0;


    // Type
    
    
};
} // namespace comm
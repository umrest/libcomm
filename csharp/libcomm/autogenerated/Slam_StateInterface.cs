using System;

using comm;

namespace comm
{
public abstract class Slam_StateInterface : RESTPacket{
    public Slam_StateInterface()
    {

    }

           // Variables
    protected Field_Position _field_position = new Field_Position();


    // Offsets
    protected int FIELD_POSITION_OFFSET = 0;


    // Type
    public override CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.SLAM_STATE; }
    
};
} // namespace comm
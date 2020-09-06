using comm;

namespace comm
{
class Navigation_StateInterface : RESTPacket{
    public Navigation_StateInterface()
    {

    }

           // Variables
    protected Field_Position _field_position;


    // Offsets
    protected int FIELD_POSITION_OFFSET = 0;


    // Type
    CommunicationDefinitions.TYPE type(){ return CommunicationDefinitions.TYPE.NAVIGATION_STATE; }
    
};
} // namespace comm
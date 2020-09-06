#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
class Vision_ImageInterface : public RESTPacket{
    public :
        Vision_ImageInterface()
    {

    }
    // Variables
    bytearray _image;


    // Offsets
    int IMAGE_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_IMAGE; }
};
} // namespace comm

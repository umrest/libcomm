#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"


namespace comm
{
public abstract class Vision_ImageInterface : public RESTPacket{
    public :
        Vision_ImageInterface()
    {

    }
    // Variables
    char* _image;


    // Offsets
    int IMAGE_OFFSET = 0;


    // Type
    CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_IMAGE; }
};
} // namespace comm

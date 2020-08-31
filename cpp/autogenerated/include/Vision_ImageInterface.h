#pragma once

// Requirements
#include "RESTPacket.h"
#include "CommunicationDefinitions.h"
#include "Vision_Image.h"


namespace comm
{
class Vision_ImageInterface : public RESTPacket{
    public :
        Vision_ImageInterface()
    {

    }
    // Variables
    char* _image;

    // Offsets
    int image_OFFSET = 0;
            int SIZE = 8191;

    // Type
    
                CommunicationDefinitions::TYPE type(){ return CommunicationDefinitions::TYPE::VISION_IMAGE; }
            
};
} // namespace comm

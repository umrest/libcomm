#pragma once

#include <map>
#include <stdint.h>

namespace comm
{

class CommunicationDefinitions
{
    public:
        
        [[ENUMS]]

        [[MAPS]]

        CommunicationDefinitions(){
            
        }

static const std::map<TYPE, int> PACKET_SIZES;


        static uint8_t key[3];

        
    
};

}
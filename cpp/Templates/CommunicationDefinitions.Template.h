#pragma once

#include <map>
#include <stdint.h>

namespace comm
{

class CommunicationDefinitions
{
    public:
        
        enum class TYPE
        {
            [[TYPES]]

        };

        enum class IDENTIFIER
        {
            [[IDENTIFIERS]]
        };

        static const std::map<TYPE, int> PACKET_SIZES;

        CommunicationDefinitions(){
            
        }



        static uint8_t key[3];

        
    
};

}
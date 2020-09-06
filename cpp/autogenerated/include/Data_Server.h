#pragma once

#include "Data_ServerInterface.h"


namespace comm
{
    class Data_Server : public Data_ServerInterface
    {
        public:
            Data_Server() {

            }
            // Accessors
            BitArray8 get_connected_status(){
                _connected_status = other;
            };

void set_connected_status(BitArray8 other){
                _connected_status = other;
            };

            
            // Serializers
            

            
            
    };
} // namespace comm

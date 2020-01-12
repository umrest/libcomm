#pragma once

#include <stdint.h>

#include "Types.hpp"

namespace comm
{
    class DataServer : DataServerInterface
    {
        public:
            DataServer() {

            }
            
        std::array<char*, 127> Serialize() {
            std::array<char*, 127> data;
            
            BitArray8* connected_status_ptr = &_connected_status;
            std::copy(connected_status_ptr, connected_status_ptr + 1, data.begin() + CONNECTED_STATUS_OFFSET);
            


            return data;
        }

        void Deserialize(char* data) {
           
            BitArray8* connected_status_ptr = &_connected_status;
            std::copy(data + CONNECTED_STATUS_OFFSET, data + CONNECTED_STATUS_OFFSET + 1, connected_status_ptr);
            
 
        }
        

            // Accessors
             BitArray8 connected_status(){ return _connected_status; }


    };
} // namespace comm

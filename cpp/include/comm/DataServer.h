#pragma once

#include "comm/DataServerInterface.h"


namespace comm
{
    class DataServer : public DataServerInterface
    {
        public:
            DataServer() {

            }
            // Accessors
             BitArray8 _connected_status(){ return connected_status; }


            
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(128);
            
            data[0] = 8;
            
            
                std::vector<uint8_t> connected_status_data = connected_status.Serialize();
                std::copy(connected_status_data.begin(), connected_status_data.begin() + 1, data.begin() + CONNECTED_STATUS_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::vector<uint8_t> connected_status_data(data.begin() + CONNECTED_STATUS_OFFSET, data.begin() + CONNECTED_STATUS_OFFSET + 1);
                connected_status.Deserialize(connected_status_data);
                
 
        }
        

            
            
    };
} // namespace comm

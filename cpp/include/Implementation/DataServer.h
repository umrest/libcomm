#pragma once

#include "Interfaces/DataServer.h"


namespace comm
{
    class DataServer : DataServerInterface
    {
        public:
            DataServer() {

            }
            // Serializers
            
        std::vector<uint8_t> Serialize() {
            std::vector<uint8_t> data(127);
            
                std::vector<uint8_t> connected_status_data = connected_status.Serialize();
                std::copy(connected_status_data.begin(), connected_status_data.begin() + 1, data.begin() + CONNECTED_STATUS_OFFSET);
                


            return data;
        }

        void Deserialize(std::vector<uint8_t> data) {
           
                std::vector<uint8_t> connected_status_data(data.begin() + CONNECTED_STATUS_OFFSET, data.begin() + CONNECTED_STATUS_OFFSET + 1);
                connected_status.Deserialize(connected_status_data);
                
 
        }
        

            // Accessors
            
    };
} // namespace comm

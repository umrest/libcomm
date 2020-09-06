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
                return _connected_status;
            }

void set_connected_status(BitArray8 other){
                _connected_status = other;
            };

            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            
            auto ___connected_status = _connected_status.Serialize();
            uint8_t* __connected_status = (uint8_t*)&___connected_status[0];

            std::copy(__connected_status, __connected_status + 1, data.begin() + CONNECTED_STATUS_OFFSET);

        return data;
        }
        void Deserialize(std::vector<uint8_t> data)  {
         std::vector<uint8_t> new_data;
        
            std::vector<uint8_t> __connected_status(1);
            std::copy(data.begin() + CONNECTED_STATUS_OFFSET, data.begin() + CONNECTED_STATUS_OFFSET + 1, new_data.begin());
            _connected_status.Deserialize(__connected_status);}
        

            
            
    };
} // namespace comm

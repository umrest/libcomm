#pragma once

#include "Data_ServerInterface.h"
#include "BitArray8Interface.h"


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
            void set_connected_status(BitArray8 val){
                _connected_status = val;
            }
            
            
            // Serializers
            std::vector<uint8_t> Serialize() {
                     std::vector<uint8_t> data(127);
                     
            std::vector<uint8_t> __connected_status = _connected_status.Serialize();
                    uint8_t* ___connected_status= &__connected_status[0];
            std::copy(___connected_status, ___connected_status + 1, data.begin() + connected_status_OFFSET);
            
                     return data;
                     }
                 void Deserialize(std::vector<uint8_t> data)  {
            
         std::vector<uint8_t> new_data;
                     
         
            new_data.clear();
            new_data.resize(1);
            std::copy(data.begin() + connected_status_OFFSET, data.begin() + connected_status_OFFSET + 1, new_data.begin());
            _connected_status.Deserialize(new_data);
            
                     }
                

            
            
    };
} // namespace comm

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
            bool get_hero_connected(){
                return _connected_status.GetBit(0);
            }
bool get_vision_connected(){
                return _connected_status.GetBit(1);
            }
bool get_dashboard_connected(){
                return _connected_status.GetBit(2);
            }
bool get_realsense_connected(){
                return _connected_status.GetBit(3);
            }
bool get_tcpserial_connected(){
                return _connected_status.GetBit(4);
            }

void set_hero_connected(bool other){
                _connected_status.SetBit(0, other);
            };
void set_vision_connected(bool other){
                _connected_status.SetBit(1, other);
            };
void set_dashboard_connected(bool other){
                _connected_status.SetBit(2, other);
            };
void set_realsense_connected(bool other){
                _connected_status.SetBit(3, other);
            };
void set_tcpserial_connected(bool other){
                _connected_status.SetBit(4, other);
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
        
            std::vector<uint8_t> __connected_status(1);
            std::copy(data.begin() + CONNECTED_STATUS_OFFSET, data.begin() + CONNECTED_STATUS_OFFSET + 1, __connected_status.begin());
            _connected_status.Deserialize(__connected_status);}
        

            
            
    };
} // namespace comm

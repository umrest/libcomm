#include "RESTClient.h"

#include <iostream>

#include "Vision_Command.h"
#include "Vision_Properties.h"
#include "Realsense_Command.h"

comm::RESTClient::RESTClient(comm::CommunicationDefinitions::IDENTIFIER _identifier) : identifier(_identifier){
    socket_reconnect();
    if(socket_connected){
        on_connect();
    }
}

std::vector<std::unique_ptr<comm::RESTPacket>> comm::RESTClient::get_messages(){
       std::vector<std::unique_ptr<comm::RESTPacket>> messages;

        while (valid_key == false && read_nonblocking(recv + cur_key_idx, 1))
        {
            if (recv[cur_key_idx] != comm::CommunicationDefinitions::key[cur_key_idx])
            {
                cur_key_idx = 0;
                valid_key = false;
            }
            else{
                cur_key_idx++;
            }

            if(cur_key_idx > 2){
                valid_key = true;
            }
        }

        if (valid_key)
        {
            if(read_nonblocking(recv, 1)){
                comm::CommunicationDefinitions::TYPE type = (comm::CommunicationDefinitions::TYPE)recv[0];

                int size = CommunicationDefinitions::PACKET_SIZES.at(type);

                read_nonblocking(recv, size);

                std::unique_ptr<comm::RESTPacket> packet;

                if (type == comm::CommunicationDefinitions::TYPE::VISION_COMMAND){
                    packet.reset(new comm::Vision_Command());
                }
                else if (type == comm::CommunicationDefinitions::TYPE::REALSENSE_COMMAND){
                    packet.reset(new comm::Realsense_Command());
                }
                else if (type == comm::CommunicationDefinitions::TYPE::VISION_PROPERTIES){
                    packet.reset(new comm::Vision_Properties());
                }

                std::vector<uint8_t> data(recv, recv + size);
                packet->Deserialize(data);

                valid_key = false;
                cur_key_idx = 0;

                messages.push_back(std::move(packet));
            }
           
        }

        return messages;
    }

    void comm::RESTClient::send_message(RESTPacket* msg){
       
        std::vector<uint8_t> data;
        data.push_back((uint8_t)msg->type());
        std::vector<uint8_t> data2 = msg->Serialize();

        data.insert(data.end(),data2.begin(),data2.end());

        write(data);
    }

    void comm::RESTClient::send_identifier(){
        comm::Identifier identifier_data;
        identifier_data._identifier = (uint8_t)identifier;
        send_message(&identifier_data);
    }

    void comm::RESTClient::on_connect(){
        std::cout << "on_connect" << std::endl; 
        send_identifier();
    }

#pragma once
#include "RESTPacket.h"
#include "TCPClient.h"
#include "CommunicationDefinitions.h"
#include "BitArray8.h"
#include "Identifier.h"
#include "Joystick.h"
#include "Vision.h"
#include "Dashboard.h"

namespace comm {


class RESTClient : public TCPClient {

    public:
	RESTClient(comm::CommunicationDefinitions::IDENTIFIER _identifier);
	std::vector<std::unique_ptr<comm::RESTPacket>> get_messages();
	void send_message(RESTPacket*);

	int cur_key_idx = 0;

	bool valid_key = false;

	uint8_t recv[512];
	comm::CommunicationDefinitions::IDENTIFIER identifier;
	void send_identifier();
	void on_connect();

};
}
			
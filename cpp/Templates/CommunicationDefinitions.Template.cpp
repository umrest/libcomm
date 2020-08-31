#include "CommunicationDefinitions.h"

[[INCLUDE]]

using namespace comm;

const std::map<CommunicationDefinitions::TYPE, int> CommunicationDefinitions::PACKET_SIZES = {
    [[PACKET_SIZES]]
};

uint8_t CommunicationDefinitions::key[3] = {44, 254, 153};
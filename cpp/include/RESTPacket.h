#pragma once

#include <vector>
#include <stdint.h>

#include "CommunicationDefinitions.h"

namespace comm{


class RESTPacket
{
    public:
    virtual std::vector<uint8_t> Serialize() = 0;

    virtual void Deserialize(std::vector<uint8_t>) = 0;

    virtual CommunicationDefinitions::TYPE type() {
        return CommunicationDefinitions::TYPE::INVALID;
    }
};}
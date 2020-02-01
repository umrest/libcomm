#include <vector>

class RestPacket
{
    virtual std::vector<uint8_t> Serialize() = 0;

    virtual void Deserialize(std::vector<uint8_t>) = 0;
};
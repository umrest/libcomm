#pragma once

namespace comm
{
class BitArray8
{
public:
    char aByte = 0;
    BitArray8()
    {
    }

    void SetBit(int pos, bool value)
    {
        if (value)
        {
            //left-shift 1, then bitwise OR
            aByte = (aByte | (1 << pos));
        }
        else
        {
            //left-shift 1, then take complement, then bitwise AND
            aByte = (aByte & ~(1 << pos));
        }
    }

    bool GetBit(int pos)
    {
        //left-shift 1, then bitwise AND, then check for non-zero
        return ((aByte & (1 << pos)) != 0);
    }

    std::vector<uint8_t> Serialize()
    {
        std::vector<uint8_t> data(1);

        data[0] = aByte;

        return data;
    }

    void Deserialize(std::vector<uint8_t> data)
    {
        std::copy(data.begin() + 0, data.begin() + 0 + 1, (uint8_t *)&aByte);
    }
};

} // namespace comm
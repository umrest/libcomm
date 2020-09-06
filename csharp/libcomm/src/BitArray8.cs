using System;

using comm;

namespace comm
{
    public class BitArray8 : Field_Position
    {
        public BitArray8()
        {

        }

        byte aByte;

        public void SetBit(int pos, bool value)
        {
            if (value)
            {
                //left-shift 1, then bitwise OR
                aByte = (byte)(aByte | (1 << pos));
            }
            else
            {
                //left-shift 1, then take complement, then bitwise AND
                aByte = (byte)(aByte & ~(1 << pos));
            }
        }

        public bool GetBit(int pos)
        {
            //left-shift 1, then bitwise AND, then check for non-zero
            return ((aByte & (1 << pos)) != 0);
        }

        public override byte[] Serialize()
        {
            byte[] data = new byte[1];

            data[0] = aByte;

            return data;
        }

        public override void Deserialize(byte[] data)
        {
            aByte = data[0];
        }
    };



};
// namespace comm

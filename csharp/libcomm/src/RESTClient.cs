using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.Remoting;

namespace comm
{
    class RESTClient
    {
        private TcpClient client = new TcpClient();

        private int cur_key_idx = 0;

        private bool valid_key = false;

        private byte[] recv = new byte[512];

        comm.CommunicationDefinitions.IDENTIFIER identifier;

        public RESTClient(comm.CommunicationDefinitions.IDENTIFIER _identifier)
        {
            identifier = _identifier;
        }

        public bool read_nonblocking(byte[] recv, int offset, int size)
        {
            if (client.Available >= size)
            {
                client.GetStream().Read(recv, offset, size);
                return true;
            }
            return false;
        }

        public RESTPacket[] get_messages()
        {
            List<RESTPacket> messages = new List<RESTPacket>();

            while (valid_key == false && read_nonblocking(recv, cur_key_idx, 1))
            {
                if (recv[cur_key_idx] != comm.CommunicationDefinitions.key_[cur_key_idx])
                {
                    cur_key_idx = 0;
                    valid_key = false;
                }
                else
                {
                    cur_key_idx++;
                }

                if (cur_key_idx > 2)
                {
                    valid_key = true;
                }
            }

            if (valid_key)
            {
                if (read_nonblocking(recv, 0, 1))
                {
                    comm.CommunicationDefinitions.TYPE type = (comm.CommunicationDefinitions.TYPE)recv[0];

                    int size = CommunicationDefinitions.PACKET_SIZES[type];

                    read_nonblocking(recv, 0, size);

                    comm.RESTPacket packet = null;

                    if (type == comm.CommunicationDefinitions.TYPE.VISION_COMMAND)
                    {
                        packet = new comm.Vision_Command();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.REALSENSE_COMMAND)
                    {
                        packet = new comm.Realsense_Command();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.VISION_PROPERTIES)
                    {
                        packet = new comm.Vision_Properties();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.VISION)
                    {
                        packet = new comm.Vision();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.HARDWARE)
                    {
                        packet = new comm.Hardware();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.VISION_IMAGE)
                    {
                        packet = new comm.Vision_Image();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.IDENTIFIER)
                    {
                        packet = new comm.Identifier();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.DASHBOARD)
                    {
                        packet = new comm.Dashboard();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.DATA_SERVER)
                    {
                        packet = new comm.Data_Server();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.SENSOR_STATE)
                    {
                        packet = new comm.Sensor_State();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.REALSENSE)
                    {
                        packet = new comm.Realsense();
                    }
                    else if (type == comm.CommunicationDefinitions.TYPE.JOYSTICK)
                    {
                        packet = new comm.Joystick();
                    }

                    byte[] data = new byte[size];

                    Array.Copy(data, recv, size);
                    packet.Deserialize(data);

                    valid_key = false;
                    cur_key_idx = 0;

                    messages.Add(packet);
                }

            }

            return messages.ToArray();
        }

        void send_message(RESTPacket msg)
        {
            byte[] data = msg.Serialize();
            client.GetStream().Write(data, 0, data.Length);
        }

        void send_identifier()
        {
            comm.Identifier identifier_data = new comm.Identifier();
            identifier_data.set_identifier((byte)identifier);
            send_message(identifier_data);
        }

        void on_connect()
        {
            Console.WriteLine("on_connect");
            send_identifier();
        }
    }
}
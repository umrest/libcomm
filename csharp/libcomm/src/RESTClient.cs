using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.Data.SqlTypes;
using System.Net.Sockets;
using System.Runtime.Remoting;

namespace comm
{
    public abstract class RESTClient
    {
        private TcpClient client = null;
        private int cur_key_idx = 0;

        private byte[] recv = new byte[65536];

        comm.CommunicationDefinitions.IDENTIFIER identifier;

        string host;
        int port;

        public enum ConnectionState
        {
            Disconnected = 0,
            Connected = 1,
        }

        public enum ReadState
        {
            Key = 0,
            Type = 1,
            Data
        }

        protected ConnectionState connection_state = ConnectionState.Disconnected;
        protected ReadState read_state = ReadState.Key;

        comm.CommunicationDefinitions.TYPE read_type;

        public bool connected()
        {
            return connection_state != ConnectionState.Disconnected;
        }

        public RESTClient(string _host, int _port, comm.CommunicationDefinitions.IDENTIFIER _identifier)
        {
            identifier = _identifier;
            host = _host;
            port = _port;
        }
        public abstract void on_connect();
        public abstract void on_disconnect();
        public void socket_reconnect()
        {
            try
            {
                client = new TcpClient();
                client.SendBufferSize = 128;
                client.ReceiveBufferSize = 128000;
                client.ReceiveTimeout = 1000;
                client.SendTimeout = 1000;
                client.Connect(host, port);
                connection_state = ConnectionState.Connected;
                Console.WriteLine("Socket: Reconnect Succeeded");

                send_identifier();
                on_connect();
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
                connection_state = ConnectionState.Disconnected;
                Console.WriteLine("Socket: Reconnect Failed");
                System.Threading.Thread.Sleep(500);
            }


        }

        public void socket_disconnect()
        {
            Console.WriteLine("Socket: Disconnected");

            client.Close();
            connection_state = ConnectionState.Disconnected;
            on_disconnect();
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

            bool continue_reading = true;
            while (continue_reading)
            {
                continue_reading = false;
                if (connection_state != ConnectionState.Connected)
                {
                    break;
                }

                while (read_state == ReadState.Key && read_nonblocking(recv, cur_key_idx, 1))
                {
                    if (recv[cur_key_idx] != comm.CommunicationDefinitions.key[cur_key_idx])
                    {
                        Console.WriteLine("Invalid Key: " + recv[cur_key_idx]);
                        cur_key_idx = 0;
                    }
                    else
                    {
                        cur_key_idx++;
                    }

                    if (cur_key_idx > 2)
                    {
                        read_state = ReadState.Type;
                        cur_key_idx = 0;
                    }

                    continue_reading = true;
                }

                if (read_state == ReadState.Type && read_nonblocking(recv, 0, 1))
                {
                    read_type = (comm.CommunicationDefinitions.TYPE)recv[0];
                    if (comm.CommunicationDefinitions.PACKET_SIZES.ContainsKey(read_type))
                    {
                        read_state = ReadState.Data;
                    }
                    else
                    {
                        Console.WriteLine("Invalid Type: " + read_type);
                        read_state = ReadState.Key;
                    }

                    continue_reading = true;
                }

                int size;

                if (read_state == ReadState.Data && comm.CommunicationDefinitions.PACKET_SIZES.TryGetValue(read_type, out size) && read_nonblocking(recv, 0, size))
                {

                    comm.RESTPacket packet = null;

                    if (read_type == comm.CommunicationDefinitions.TYPE.VISION_COMMAND)
                    {
                        packet = new comm.Vision_Command();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.REALSENSE_COMMAND)
                    {
                        packet = new comm.Realsense_Command();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.VISION_PROPERTIES)
                    {
                        packet = new comm.Vision_Properties();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.VISION)
                    {
                        packet = new comm.Vision();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.HARDWARE)
                    {
                        packet = new comm.Hardware();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.VISION_IMAGE)
                    {
                        packet = new comm.Vision_Image();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.IDENTIFIER)
                    {
                        packet = new comm.Identifier();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.DASHBOARD)
                    {
                        packet = new comm.Dashboard();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.DATA_SERVER)
                    {
                        packet = new comm.Data_Server();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.SENSOR_STATE)
                    {
                        packet = new comm.Sensor_State();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.REALSENSE)
                    {
                        packet = new comm.Realsense();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.JOYSTICK)
                    {
                        packet = new comm.Joystick();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.NAVIGATION_STATE)
                    {
                        packet = new comm.Navigation_State();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.NAVIGATION_OBSTACLES)
                    {
                        packet = new comm.Navigation_Obstacles();
                    }
                    else if (read_type == comm.CommunicationDefinitions.TYPE.NAVIGATION_PATH)
                    {
                        packet = new comm.Navigation_Path();
                    }


                    byte[] data = new byte[size];

                    Array.Copy(recv, data, size);
                    packet.Deserialize(data);

                    messages.Add(packet);

                    read_state = ReadState.Key;

                    continue_reading = true;
                }
            }

            return messages.ToArray();
        }

        public void send_message(RESTPacket msg)
        {
            if (connection_state != ConnectionState.Connected)
            {
                return;
            }
            byte[] msg_data = msg.Serialize();
            byte[] data = new byte[msg_data.Length + 4];
            Array.Copy(msg_data, 0, data, 4, msg_data.Length);
            Array.Copy(CommunicationDefinitions.key, 0, data, 0, 3);
            data[3] = (byte)msg.type();
            try
            {
                client.GetStream().Write(data, 0, data.Length);
            }
            catch
            {
                socket_disconnect();
            }
        }

        public void send_identifier()
        {
            comm.Identifier identifier_data = new comm.Identifier();
            identifier_data.set_identifier((byte)identifier);
            send_message(identifier_data);
        }
    }
}
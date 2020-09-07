using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.Net.Sockets;
using System.Runtime.Remoting;

namespace comm
{
    public abstract class RESTClient
    {
        private TcpClient client = null;
        private int cur_key_idx = 0;

        private bool valid_key = false;

        private byte[] recv = new byte[65536];

        comm.CommunicationDefinitions.IDENTIFIER identifier;

        string host;
        int port;

        public enum ConnectionState
        {
            Disconnected = 0,
            Connected = 1,
        }

        protected ConnectionState connection_state = ConnectionState.Disconnected;

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
            catch(Exception e)
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
            if (connection_state != ConnectionState.Connected)
            {
                return new RESTPacket[0];
            }
            List<RESTPacket> messages = new List<RESTPacket>();

            while (valid_key == false && read_nonblocking(recv, cur_key_idx, 1))
            {
                if (recv[cur_key_idx] != comm.CommunicationDefinitions.key[cur_key_idx])
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
                    int size = 0;
                    if (comm.CommunicationDefinitions.PACKET_SIZES.TryGetValue(type, out size)){

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

                        Array.Copy(recv, data, size);
                        packet.Deserialize(data);

                        valid_key = false;
                        cur_key_idx = 0;

                        messages.Add(packet); }
                    else
                    {
                        Console.WriteLine("Invalid Type: " + type);
                    }
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
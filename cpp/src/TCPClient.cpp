#include "TCPClient.h"

#include "CommunicationDefinitions.h"
#include "Identifier.h"
#include "BitArray8Interface.h"

void TCPClient::socket_reconnect(){
        boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address::from_string(host), port);

        boost::system::error_code ec;

        socket.connect(endpoint, ec);

        if (!ec)
        {

            std::cout << "Socket: Reconnect Succeeded" << std::endl;

            boost::asio::socket_base::send_buffer_size option(128);
            socket.set_option(option);
            //socket.set_option(boost::asio::ip::tcp::no_delay(true));

            socket_connected = true;
        }
        else
        {
            socket_connected = false;
            std::cout << "Socket: Reconnect Failed" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    }

    void TCPClient::write(std::vector<uint8_t> &data)
    {
        boost::system::error_code ec;

        boost::array<boost::asio::const_buffer, 2> d = {
            boost::asio::buffer(comm::CommunicationDefinitions::key, 3),
            boost::asio::buffer(data, data.size())};

        int bytesTransferred = boost::asio::write(socket, d, ec);

        handle_socket_write(ec, bytesTransferred);
    }

    bool TCPClient::read_nonblocking(uint8_t *data, int size)
    {
        if (socket.available() >= size)
        {
            socket.read_some(boost::asio::buffer(data, size));
            return true;
        }
        return false;
    }

    void TCPClient::read(char *data, int size)
    {
        socket.async_read_some(boost::asio::buffer(socket_buffer, 1),
                               boost::bind(&TCPClient::handle_socket_receive,
                                           this, boost::asio::placeholders::error,
                                           boost::asio::placeholders::bytes_transferred));
    }

    void TCPClient::handle_socket_receive(const boost::system::error_code &ec, std::size_t bytes_transferred)
    {
        if (!ec)
        {
            // Data

            //socket_read();

            std::cout << "Socket Recieve" << std::endl;
        }
        else
        {
            std::cout << "Socket: Disconnected" << std::endl;
            socket.close();
            socket_reconnect();
            //socket_read();
        }
    }

    void TCPClient::handle_socket_write(const boost::system::error_code &ec, std::size_t bytes_transferred)
    {
        if (!ec)
        {
        }
        else
        {
            std::cout << "Socket: Disconnected" << std::endl;
            socket.close();
            socket_reconnect();
            //socket_read();
        }
    }
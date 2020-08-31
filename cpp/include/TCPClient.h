#pragma once

#include <boost/asio.hpp>
#include <boost/bind.hpp>

#include <boost/array.hpp>

#include <chrono>
#include <thread>

#include <iostream>


class TCPClient
{
    protected:
    boost::asio::io_service io_service;
    boost::asio::ip::tcp::socket socket;

    bool socket_connected = false;

    std::string host = "127.0.0.1";
    int port = 8091;

    unsigned char socket_buffer[1024]; // buffer from serial

public:
    TCPClient() : socket(io_service)
    {
    }

    void socket_reconnect();

    virtual void on_connect() = 0;
    

   
    void write(std::vector<uint8_t> &data);

    bool read_nonblocking(uint8_t *data, int size);

    void read(char *data, int size);

    void handle_socket_receive(const boost::system::error_code &ec, std::size_t bytes_transferred);
    void handle_socket_write(const boost::system::error_code &ec, std::size_t bytes_transferred);
};
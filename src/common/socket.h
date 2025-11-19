#ifndef SOCKET_H
#define SOCKET_H
#include <string>
#include <cstdint>
#pragma once

class Socket {
public:

    // Constructs an invalid socket by default
    Socket();
    explicit Socket(int fd);

    // No copying allowed
    Socket(const Socket&) = delete;
    Socket& operator=(const Socket&) = delete;

    // Moves support
    Socket(Socket&& other) noexcept;
    Socket& operator=(Socket&& other) noexcept;

    ~Socket();

    // Create a listening server socket on the specified port
    // Returns a socket that is either valid on success or invalid on failure
    static Socket createServerSocket(uint16_t port, int backlog = 10);

    // Connect to a server at the specified IP and port
    static Socket connectTo(const std::string& ip, uint16_t port);

    // Send all data in the provided string
    // Returns the number of bytes sent, or -1 on error
    ssize_t sendAll(const std::string& data) const;

    // Receive up to maxBytes of data and return it as a string
    // Returns an empty string on error or if no data is received
    std::string receiveSome(std::size_t maxBytes = 4096) const;

    // Check if the socket is valid
    bool isValid() const;

    // Get the underlying file descriptor
    int getFD() const noexcept;

    // Close the socket
    void close() noexcept;

    private:
    int fd_;

};
#endif // SOCKET_H

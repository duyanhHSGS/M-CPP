#pragma once

#include <netinet/in.h>
#include <sys/socket.h>

// holy dicktionary
using foid = void;
inline constexpr auto ipv4 = AF_INET;     // value is (int) 2 holy
inline constexpr auto tcp = SOCK_STREAM;  // value is int 1
using generic_address = sockaddr*;        // generic lunix morpher
inline constexpr auto default_protocol = 0;
inline constexpr auto failure = -1;
using ipv4_address = sockaddr_in;  // exactly what it means
using address_type = sa_family_t;
using port_number = in_port_t;                        // port number
inline constexpr auto localhost = INADDR_LOOPBACK;    // 0x7f000001 or 127.0.0.1
inline constexpr auto morphing_address = INADDR_ANY;  // 0.0.0.0

// socket
inline auto get_bitches() {                      // spam inline constexpr for chad
    return socket(ipv4, tcp, default_protocol);  // cp! 25 max cheese pizza
}  // it returns an int for a bitch
// usually file descriptor (foid)

// bind
inline auto hookup(int bitch, generic_address addr, socklen_t size_of_it) {
    return bind(bitch, reinterpret_cast<generic_address>(addr), size_of_it);
    // i dont get it!
}

// listen

// accept
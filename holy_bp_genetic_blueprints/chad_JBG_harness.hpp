#pragma once

#include <netinet/in.h>
#include <sys/socket.h>

#include <iostream>
#include <string>

// holy dicktionary
using foid = void;
inline constexpr auto ipv4 = AF_INET;       // value is (int) 2 holy
inline constexpr auto tcp = SOCK_STREAM;    // value is int 1
using generic_address_address = sockaddr*;  // generic lunix morpher
inline constexpr auto default_protocol = 0;
inline constexpr auto failure = -1;
using generic_address = sockaddr_in;                  // exactly what it means
using port_number = in_port_t;                        // port number
inline constexpr auto localhost = INADDR_LOOPBACK;    // 0x7f000001 or 127.0.0.1
inline constexpr auto morphing_address = INADDR_ANY;  // 0.0.0.0

// holy prints
inline foid puke(const std::string& str) {
    std::cout << str << std::endl;
}

inline auto& ip_type(generic_address& a) {
    return a.sin_family;
}
inline auto& portugul(generic_address& a) {
    return a.sin_port;
}
inline auto& ip_actual(generic_address& a) {
    return a.sin_addr.s_addr;  // fuck the one who name this bullshit
}
inline auto to_portugul(uint16_t _port) {
    return htons(_port);
}

// socket
inline auto get_bitches() {                      // spam inline constexpr for chad
    return socket(ipv4, tcp, default_protocol);  // cp! 25 max cheese pizza
}  // it returns an int for a bitch
// usually file descriptor (foid)

// bind
inline auto hookup(int bitch, generic_address_address addr, socklen_t size_of_it) {
    return bind(bitch, reinterpret_cast<generic_address_address>(addr), size_of_it);
    // i dont get it!
}

// listen

// accept
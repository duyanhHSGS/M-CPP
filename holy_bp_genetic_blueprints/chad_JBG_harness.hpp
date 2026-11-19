#pragma once

#include <sys/socket.h>

// holy dicktionary
using foid = void;
inline constexpr auto ipv4 = AF_INET;     // value is (int) 2 holy
inline constexpr auto tcp = SOCK_STREAM;  // value is int 1

// socket
inline auto get_bitches() {       // spam inline constexpr for chad
    return socket(ipv4, tcp, 0);  // cp! 25 max cheese pizza
}  // it returns an int for a bitch

// bind
inline auto hookup(int bitch, sockaddr* address, socklen_t size_of_it) {
    return bind(bitch, reinterpret_cast<sockaddr*>(address), size_of_it);
    // i dont get it!
}

// listen

// accept
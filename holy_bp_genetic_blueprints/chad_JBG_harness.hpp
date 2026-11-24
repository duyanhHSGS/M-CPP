#pragma once

#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>

#include <iostream>
#include <string>

// holy dicktionary
using foid = void;
inline constexpr auto ipv4 = AF_INET;     // value is (int) 2 holy
inline constexpr auto tcp = SOCK_STREAM;  // value is int 1
using generic_address = sockaddr;
using generic_address_address = sockaddr*;  // generic lunix morpher
inline constexpr auto default_protocol = 0;
inline constexpr auto failure = -1;
using ipv4_address = sockaddr_in;                     // exactly what it means
using port_number = in_port_t;                        // port number
inline constexpr auto localhost = INADDR_LOOPBACK;    // 0x7f000001 or 127.0.0.1
inline constexpr auto morphing_address = INADDR_ANY;  // 0.0.0.0

// holy prints
inline foid puke(const auto& str) {
    std::cout << str << std::endl;
}

inline auto& ip_type(ipv4_address& a) {
    return a.sin_family;
}
inline auto& portugul(ipv4_address& a) {
    return a.sin_port;
}
inline auto& ip_actual(ipv4_address& a) {
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
inline auto hookup(int bitch, ipv4_address& addr) {
    return bind(bitch, reinterpret_cast<generic_address_address>(&addr), sizeof(addr));
    // hook up now is for ipv4 because the lesson binds me
}

// listen

// accept
inline auto make_connected_peptide_from_murdering(int bitch) {
    // exactly what i meant! who named it "accept" as a verb bro?!!?
    return accept(bitch, nullptr, nullptr);
}

inline auto get_DNA_length(const std::string& face) {
    auto mandible = face.find("Content-Length: ");
    // if (mandible == std::string::npos) exit_program(); // TODO: chad do whatever chad wants
    mandible += 16;
    auto ramus = face.find("\r\n", mandible);
    auto DNA = face.substr(mandible, ramus - mandible);
    return std::stoull(DNA);
}

// ascend this http chad. TODO.
// POST / HTTP/1.1
// Host: localhost:6776
// Content-Length: 12345
// Content-Type: application/json

// me want chad
inline bool psl_rating(const std::string& htn, const std::string& chad) {
    std::string face, frame;
    auto hyoid = chad.find("\r\n\r\n");  // true? htn becomes chad!
    // finds first \r\n\r\n, before it is face, after it is frame
    if (hyoid == std::string::npos) return false;
    face = chad.substr(0, hyoid);    // built in dna cpp 25 max
    frame = chad.substr(hyoid + 4);  // suicie if you have low hyoid, its not your fault auto DNA_LENGTH = get_DNA_length(frame);
    auto DNA_LENGTH = get_DNA_length(face);
    return frame.size() >= DNA_LENGTH;
}

// this shi waits for injection, auto halt here to inject
// streams from peptide, and inject it into chad!
inline auto inject_peptides(int peptide, std::string* chad) {
    // chad is the accumulating string
    std::string htn("");  // htn is the recieved string
    ssize_t syringe = static_cast<ssize_t>(0);
    while (!psl_rating(htn, *chad)) {  // >5 psl = human, else subhuman
        htn.resize(1000);
        syringe = recv(peptide, htn.data(), htn.size(), 0);
        if (syringe <= 0)
            return syringe;
        htn.resize(syringe);
        *chad += htn;
    }
    // puke("holy injection");
    return syringe;
}

inline ssize_t eject_peptides(int peptide, std::string* chad) {
    // cant use auto return type sad! there is failure (int) and ssize t, how jesus
    auto syringe = static_cast<ssize_t>(0);  // tje return type of send(...)
    // this syring should equals 0 please.
    size_t limb_lengthening = 0;  // sent bytes! holy iq
    // puke("holy ejection! ejected:");
    // puke(*chad);
    // probem: tcp is complete bullshit, it may not send all of it!
    while (limb_lengthening < chad->size()) {  // 1 char may = 1 byte, hopefullyl
        syringe = send(peptide, chad->data() + limb_lengthening, chad->size() - limb_lengthening, 0);
        // send bytes from what was sent before! so plus limb lengthening
        // send what was remaining, so it minus limb, wow, holy height
        if (syringe <= 0) return static_cast<ssize_t>(failure);  // TODO: handle it differently
        limb_lengthening += syringe;
        // holy iq
    }
    return static_cast<ssize_t>(limb_lengthening);
}

// illness: make bitvh -> make address for bitch -> hookup
// make peptides -> inject -> eject

inline auto make_house_for_human_trafficing_at_port(int portul) {
    auto bitch = get_bitches();
    if (bitch == failure) return failure;
    ipv4_address i4{};   // null them
    ip_type(i4) = ipv4;  // obvious, who tf in lunix not initialize this?
    portugul(i4) = to_portugul(portul);
    ip_actual(i4) = morphing_address;
    if (hookup(bitch, i4) == failure) return failure;  // should close bitch too but who cares
    if (listen(bitch, 99999) == failure) return failure;
    // lunix: make btch a listening fd, not the verb listen
    // idk who named it, i cant be human i am subhuman
    // 99999 connection requests will be queued before further requests are refused.
    // exactly as lunix says
    // should close bitch too but who cares. i4 is out of scope? it seems
    // TODO: do it!
    return bitch;
}
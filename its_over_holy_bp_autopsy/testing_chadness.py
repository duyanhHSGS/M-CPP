import socket
import time

with socket.create_connection(("127.0.0.1", 6776)) as s:
    s.sendall(b"POST / HTTP/1.1\r\nHost: localhost\r\nContent-Length: 5\r\n\r\n")
    time.sleep(2)

    s.sendall(b"CHA")
    time.sleep(2)

    s.sendall(b"D!")
    s.shutdown(socket.SHUT_WR)

    while data := s.recv(4096):
        print(data.decode(), end="")

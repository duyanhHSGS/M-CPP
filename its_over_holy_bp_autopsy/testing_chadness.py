import http.client

c = http.client.HTTPConnection("127.0.0.1", 6776, timeout=5)
c.request("POST", "/", body="Hello")
r = c.getresponse()
print(r.status, r.reason)
print(r.read().decode())
c.close()

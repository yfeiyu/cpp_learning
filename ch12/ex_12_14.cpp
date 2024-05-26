#include <iostream>
#include <string>
#include <memory>
using std::shared_ptr; using std::make_shared;
using std::string;
using std::cin; using std::cout; using std::endl;

struct destination {
    string ip;
    int port;
    destination(string ip_, int port_): ip(ip_), port(port_) { }
};

struct connection {
    string ip;
    int port;
    connection(string ip_, int port_): ip(ip_), port(port_) { }
};
connection connect(destination *pDest)
{
    shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    cout << "creating connection(" << pConn.use_count() << ")" << endl;
    return *pConn;
}

void disconnect(connection conn)
{
    cout << "connetion close(" << conn.ip << ":" << conn.port << ")" << endl;
}

void end_connection(connection *p)
{
    disconnect(*p);
}

void f(destination &d)
{
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);
    cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main(int argc, char const *argv[])
{
    destination dest("192.168.1.2", 3319);
    f(dest);
    return 0;
}


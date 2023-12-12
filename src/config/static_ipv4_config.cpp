#include <iostream>
#include <syscall.h>
#include <syslog.h>
#include <arpa/inet.h>
#include <sys/sysinfo.h>
#include <sys/socket.h>
#include <boost/asio.hpp>
using namespace std;
using namespace boost::asio::chrono;
using boost::asio::ip::icmp;
using boost::asio::ip::address;
using boost::asio::ip::address_v4;
using boost::asio::ip::host_name;
using boost::asio::ip::multicast::join_group;
#if defined(SOCK_STREAM)
#endif
inline void ip_v4_config(struct sttc_v4_config* s)
{
    struct sockaddr_in sock;
    address _address_;
    if(!_address_.is_v4())
    {
        _address_.to_v4();
        s->is_ip_configurable = true;
        cout << "ipv4: " << _address_.to_string() << endl;
    }
        
}
inline void ip_v6_config(struct sttc_v6_config* s)
{
    address _address_;
    if(!_address_.is_v6() || _address_.is_v4())
    {
        _address_.to_v6();
        cout << "ipv6: " << _address_.to_string() << endl;
    }
}
struct sttc_v4_config
{
public:
   
public:
   bool is_ip_configurable;
};

typedef struct
{

}sttc_v6_config;



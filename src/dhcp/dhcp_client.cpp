/*
 * dhcp_client.cpp
 *
 *  Created on: Mar 23, 2023
 *      Author: ayaanle
 */

#include <iostream>
#include <sstream>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <sys/sysinfo.h>
#include <sys/socket.h>
#include <syslog.h>
#include <sys/socketvar.h>
#include <arpa/inet.h>
#include <syncstream>
#include <functional>
#include <boost/asio.hpp>
using boost::asio::ip::udp;
using boost::asio::ip::tcp;
using boost::asio::ip::address;
using boost::asio::ip::icmp;
using boost::asio::ip::
#define DHCP_PORT 67
#if defined(BOOST_ASIO_IP_ADDRESS_ITERATOR)
sprintf("the required asio iterator is defined");
#elif defined(BOOST_ASIO_IP_ADDRESS_ITERATOR)
#endif
#ifdef BOOST_ASIO_IP_ADDRESS_ITERATOR
#define DHCP_CONFIG (const udp::resolver& resolver)
#endif


namespace dhcp_config{
class dhcp_config
{
public:
   dhcp_config();
   dhcp_config(volatile const udp::endpoint& end_p):_socket(udp::socket&& other);
protected:
   udp::endpoint _end_point;
   udp::socket _socket;
};
};

struct dhcp_info
{
public:
   constexpr int proto_info();
};

constexpr int dhcp_info::proto_info()
{
    
}

typedef enum ICMP
{

}ICMP_CODE;



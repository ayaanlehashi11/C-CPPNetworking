/*
 * client.hpp
 *
 *  Created on: Feb 19, 2023
 *      Author: ayaanle
 */



#include <iostream>
#include <boost/asio.hpp>
#include <boost/asio/ip/tcp.hpp>
#ifndef CLIENT_HPP_
#define CLIENT_HPP_
using namespace std;
using namespace boost::asio;
using namespace boost::asio::ip;

typedef struct
{
public:
	constexpr inline string getData(tcp::socket& socket);
	inline string sendData(tcp::socket& socket , const string& message);

}Server;



#endif /* CLIENT_HPP_ */

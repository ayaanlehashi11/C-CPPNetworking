/*
 * server.hpp
 *
 *  Created on: Feb 19, 2023
 *      Author: ayaanle
 */
#include <boost/asio.hpp>
#include <boost/log/common.hpp>
#include <boost/asio/ts/internet.hpp>
#include <functional>
#include <arpa/inet.h>
#include <arpa/ftp.h>
#include <sys/socket.h>
#include <libmount/libmount.h>
#include <memory>

using boost::asio::ip::tcp;
#ifndef SERVER_HPP_
#define SERVER_HPP_

#define GET_SERVER_RESPONSE ((boost::asio::io_context))
class session
{

}
class server
{
public:
   server(boost::asio::io_context& ctxt , unsigned short port);
};
typedef struct{


}server_request;

typedef struct{


}server_response;
/**
 * the various response code
 * that the server emits at every request
*/
enum RESPONSE_CODE
{

}

#endif /* SERVER_HPP_ */

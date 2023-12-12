/*
 * http_response.hpp
 *
 *  Created on: Feb 19, 2023
 *      Author: ayaanle
 */
#include <iostream>
#include <boost/asio.hpp>
#include <sstream>
#include <memory>
#ifndef HTTP_RESPONSE_HPP_
#define HTTP_RESPONSE_HPP_
using namespace std;
class HTTPResponse {
	friend class HTTPErrorResponse;
public:
	HTTPResponse();
	~HTTPResponse();
public:
    enum class HTTPERRORCODES
	{

	}
public:
	friend bool operator == ();
	friend bool operator != ()noexcept(true);
};



#endif /* HTTP_RESPONSE_HPP_ */

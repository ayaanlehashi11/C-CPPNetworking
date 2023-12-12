#include<iostream>
#include<iterator>
#include<boost/asio.hpp>
#include<string>


class DNS_Query{
public:
    explicit DNS_Query(std::string &url);
    std::string resolve_dns(std::string &url ,
                            boost::asio::io_context io_context;
                            boost::asio::ip::tcp::resolver resolver,
                            boost::asio::ip::tcp::resolver::result_type);
public:
    static std::string url = "www.google.com"
};

explicit DNS_Query::DNS_Query(std::string &url)
{
    url = DNS_Query::url;
}
std::string DNS_Query::resolve_dns(std::string &url ,
                            boost::asio::io_context io_context;
                            boost::asio::ip::tcp::resolver resolver,
                            boost::asio::ip::tcp::resolver::result_type)
                            {

                            }
int main(int argc , char ** argv)
{
    DNS_Query dns_query("www.google.com");
    dns_query.resolve_dns()
    return 0;
}
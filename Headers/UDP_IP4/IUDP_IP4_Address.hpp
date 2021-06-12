#ifndef IUDP_IP4_ADDRESS_HPP
#define IUDP_IP4_ADDRESS_HPP

#include <arpa/inet.h>

#include <memory>
#include <string_view>

class IUDP_IP4_Address
{
   public:
	virtual ~IUDP_IP4_Address( ) { }
	virtual void                          Create (const std::string_view& ip, const int& port) = 0;
	virtual size_t                        GetAdrSize( )                                        = 0;
	virtual std::unique_ptr<sockaddr_in>& GetAdr( )                                            = 0;
};

#endif  // IUDP_IP4_ADDRESS_HPP
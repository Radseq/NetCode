#ifndef UDP_IP4_ADDRESS_CREATOR_HPP
#define UDP_IP4_ADDRESS_CREATOR_HPP

#include "IUDP_IP4_Address.hpp"

class UDP_Ip4_Address_Creator : public IUDP_IP4_Address
{
	std::unique_ptr<sockaddr_in> adress;
	size_t                       adressSize {0};

   public:
	void                          Create (const std::string_view& ip, const int& port) override;
	size_t                        GetAdrSize( ) override;
	std::unique_ptr<sockaddr_in>& GetAdr( ) override;
};

#endif  // UDP_IP4_ADDRESS_CREATOR_HPP
#ifndef CREATE_UDP_ABSTRACT_FACTORY_HPP
#define CREATE_UDP_ABSTRACT_FACTORY_HPP

#include "UDP_IP4/UDP_Ip4_Address_Creator.hpp"
#include "UdpAdrAbstractFactory.hpp"

class CreateUdpAbstractFactory : public UdpAdrAbstractFactory
{
   public:
	std::unique_ptr<IUDP_IP4_Address> CreateUdpIp4( ) override;
	// std::unique_ptr<IUDPIp4_Address> CreateUdpIp6( ) override;
};

#endif  // CREATE_UDP_IP4_ABSTRACT_FACTORY_HPP
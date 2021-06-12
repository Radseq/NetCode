#ifndef UDP_ADR_ABSTRACT_FACTORY_HPP
#define UDP_ADR_ABSTRACT_FACTORY_HPP

#include "UDP_IP4/IUDP_IP4_Address.hpp"

class UdpAdrAbstractFactory
{
   public:
	virtual ~UdpAdrAbstractFactory( ) { }
	virtual std::unique_ptr<IUDP_IP4_Address> CreateUdpIp4( ) = 0;
	// virtual Core::Scope<IUDPIp4_Address> CreateUdpIp6( ) = 0;
};

#endif  // UDP_ADR_ABSTRACT_FACTORY_HPP
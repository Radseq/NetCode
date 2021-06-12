#include "Headers/CreateUdpAbstractFactory.hpp"

std::unique_ptr<IUDP_IP4_Address> CreateUdpAbstractFactory::CreateUdpIp4( )
{
	return std::make_unique<UDP_Ip4_Address_Creator>( );
}
/*
std::unique_ptr<IUDP_IP6_Address> CreateUdpAbstractFactory::CreateUdpIp6( )
{
	return td::make_unique<UDP_Ip6_Address_Creator>( );
}*/

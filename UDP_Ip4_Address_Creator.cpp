#include "Headers/UDP_IP4/UDP_Ip4_Address_Creator.hpp"

void UDP_Ip4_Address_Creator::Create (const std::string_view& ip, const int& port)
{
	adress             = std::make_unique<sockaddr_in>( );
	adress->sin_family = AF_INET;
	adress->sin_port   = htons (port);

	int inetRes = inet_pton (AF_INET, ip.data( ), &adress->sin_addr);

	if (inetRes <= 0) { adress = nullptr; }

	adressSize = sizeof (*adress.get( ));
}

size_t UDP_Ip4_Address_Creator::GetAdrSize( ) { return adressSize; }

std::unique_ptr<sockaddr_in>& UDP_Ip4_Address_Creator::GetAdr( ) { return adress; }

#ifndef CLIENT_UDP_IP4_SEND_HPP
#define CLIENT_UDP_IP4_SEND_HPP

#include "IUDP_IP4_Address.hpp"

class ClientUdpIp4Send
{
	std::unique_ptr<IUDP_IP4_Address>& m_Adress;
	const int&                         m_Socket;

   public:
	// TODO to correct!! Core::Ref
	ClientUdpIp4Send (std::unique_ptr<IUDP_IP4_Address>& Adress, const int& Socket)
		: m_Adress (Adress)
		, m_Socket (Socket)
	{
	}

	template <class T> int Send (T* t)
	{
		return sendto (m_Socket, t, sizeof (*t), 0, (struct sockaddr*) m_Adress->GetAdr( ).get( ),
					   m_Adress->GetAdrSize( ));
	};
};

#endif  // CLIENT_UDP_IP4_SEND_HPP
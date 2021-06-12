#ifndef CLIENT_RECEIVE_HPP
#define CLIENT_RECEIVE_HPP

#include "IUDP_IP4_Address.hpp"

class ClientUdpIp4Receive
{
	const int& m_Socket;

	struct sockaddr_in m_AddressFrom = { };
	socklen_t          len           = sizeof (m_AddressFrom);

   public:
	ClientUdpIp4Receive (const int& Socket)

		: m_Socket (Socket)
	{
	}

	template <class T> std::shared_ptr<T> Receive (int* recvFromValue)
	{
		std::shared_ptr<T> packet = std::make_shared<T>( );

		size_t sizeMsg = sizeof (T);

		if (recvfrom (m_Socket, (void*) packet.get( ), sizeof (T), 0, (struct sockaddr*) &m_AddressFrom, &len) < 0)
		{
			*recvFromValue = -1;
			return nullptr;
		}

		*recvFromValue = sizeMsg;
		return packet;
	}
};

#endif  // CLIENT_RECEIVE_HPP
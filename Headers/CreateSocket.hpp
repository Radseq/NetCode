#ifndef CREATE_SOCKET_HPP
#define CREATE_SOCKET_HPP

#include <sys/socket.h>

#include "ICreateSocket.hpp"

class CreateSocket : public ICreateSocket
{
	int m_Socket {0};

   public:
	void Create( ) override;
	int  GetId( ) override;
};

#endif  // CREATE_SOCKET_HPP
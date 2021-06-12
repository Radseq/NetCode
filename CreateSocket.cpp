#include "Headers/CreateSocket.hpp"

void CreateSocket::Create( ) 
{ 
	m_Socket = socket (AF_INET, SOCK_DGRAM, 0); 
}

int CreateSocket::GetId( )
{
	if (m_Socket < 0) { return -1; }
	return m_Socket;
}

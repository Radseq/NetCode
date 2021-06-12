#ifndef ICREATE_SOCKET_HPP
#define ICREATE_SOCKET_HPP

class ICreateSocket
{
   public:
	virtual ~ICreateSocket( ) { }
	virtual void Create( ) = 0;
	virtual int  GetId( )  = 0;
};

#endif  // ICREATE_SOCKET_HPP
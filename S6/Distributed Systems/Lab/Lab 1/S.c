#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

void error(char *msg)
{
    perror(msg);
    exit(1);
}

/*
struct in_addr 
{
    u_long s_addr; 32-bit net id
}

struct sockaddr_in 
{
    short in_family;  AF_INET
    u_short sin_port; 16-bit port number
    struct in_addr sin_addr;
    char sin_zero[8];    unused
}

sin_zero is an unused member whose sole purpose is to pad the structure out to 16 bytes (which is the size of sock_addr). 

This padding size may vary depending on the address family. 
*/

int main(int argc, char *argv[])
{
    int sockfd, newsockfd, portno, clilen;

    char buffer[256]; //Storage Buffer

    struct sockaddr_in serv_addr, cli_addr;

    int n;
    
    if (argc < 2)
    {
        fprintf(stderr,"ERROR, no port provided\n");
        exit(1);
    }
    
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    /* 
    The socket() call creates a socket in the specified domain and of the specified type.

    AF_INET - Internet domain 

    s = socket(domain, type, protocol)

    If the protocol is unspecified (a value of 0), the system selects a protocol that supports the requested socket type.

    socket(AF_INET, SOCK_STREAM, 0) call results in a stream socket with the TCP protocol providing the underlying communication. 
    */
    
    if (sockfd < 0)
    {
        error("ERROR opening socket");
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));

    /*
    The bzero function can be used to erase the given memory area with zero bytes (\0). 

    It takes two arguments, the starting address of the memory region and the number of bytes that need to be zeroed out.
    */

    portno = atoi(argv[1]);
    
    serv_addr.sin_family = AF_INET;

    serv_addr.sin_addr.s_addr = INADDR_ANY;
    
    serv_addr.sin_port = htons(portno);

    /*
    INADDR_ANY is used when you don't need to bind a socket to a specific IP. 

    When calling bind() , the socket accepts connections to all the IPs of the machine.

    The htons function takes a 16-bit number in host byte order and returns a 16-bit number in network byte order.

    It is used in TCP/IP networks (the AF_INET or AF_INET6 address family).
    */
    
    if (bind(sockfd, (struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0)
    {
        error("ERROR on binding");
    }
    
    /*
    The bind function assigns a local protocol address to a socket. 
    
    With the Internet protocols, the protocol address is the combination of either a 32-bit IPv4 address or a 128-bit IPv6 address, along with a 16-bit TCP or UDP port number. 
    */

    listen(sockfd, 5);

    /*
    The listen function places a socket in a state in which it is listening for an incoming connection.
	
    The first parameter is the socket descriptor from the socket() call, sockfd.

    The second parameter specifies the number of requests that the system queues before it executes the accept() system call.
    */

    clilen = sizeof(cli_addr);

    newsockfd = accept(sockfd,(struct sockaddr *) &cli_addr, &clilen);

    /*
    The accept() call is used by a server to accept a connection request from a client. 

    When a connection is available, the socket created is ready for use to read data from the process that requested the connection. 

    The call accepts the first connection on its queue of pending connections for the given socket socket.
    */
    
    if (newsockfd < 0)
    {
        error("ERROR on accept");
    }
    
    bzero(buffer,256);

    n = read(newsockfd, buffer, 255);

    /*
    From the file indicated by the file descriptor newsockfd, the read() function reads N bytes of input into the memory area indicated by buffer. 
    */
    
    if (n < 0)
    {
        error("ERROR reading from socket");
    }
    
    printf("Here is the message: %s\n", buffer);

    n = write(newsockfd, "I got your message", 18);

    if (n < 0)
    {
        error("ERROR writing to socket");
    }
    
    return 0;
}

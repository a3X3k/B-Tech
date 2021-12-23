#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
int main()
{
	struct sockaddr_in server;
	struct sockaddr_in client;
	unsigned int sockfd, clientlen;

	char rmsg[100], smsg[100] = "Hello, who are you?";

	sockfd = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	bzero ((char*) &server, sizeof (server));

	server.sin_family = AF_INET;
	inet_aton ("127.0.0.1", &server.sin_addr);
	server.sin_port = htons (3000);

	bind (sockfd, (struct sockaddr*)&server, sizeof (server));

	recvfrom (sockfd, rmsg, 20, 0, (struct sockaddr*)&client, &clientlen); 
	sendto (sockfd, smsg, 20, 0, (struct sockaddr*)&client, clientlen);

	printf ("%s", rmsg);

	return 1;
}

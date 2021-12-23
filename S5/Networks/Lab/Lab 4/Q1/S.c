#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct sockaddr_in server;
	struct sockaddr_in client;
	unsigned int sockfd, clientlen;

	char rmsg[100], smsg[100];

	sockfd = socket (AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	bzero ((char*) &server, sizeof (server));

	server.sin_family = AF_INET;
	inet_aton ("127.0.0.1", &server.sin_addr);
	server.sin_port = htons (3000);

	bind (sockfd, (struct sockaddr*)&server, sizeof (server));

	recvfrom (sockfd, rmsg, 20, 0, (struct sockaddr*)&client, &clientlen); 

	printf ("%s", rmsg);

	int n = atoi(rmsg);

	int sum=0, m;

	while(n>0)    
	{    
		m=n%10;    
		sum=sum+m;    
		n=n/10;    
	}    

	sprintf(smsg, "%d", sum);
	
	sendto (sockfd, smsg, 20, 0, (struct sockaddr*)&client, clientlen);

	return 1;
}

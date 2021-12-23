#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
int main()
{
	struct sockaddr_in serv_addr, client_addr;
	unsigned int sockfd, client_len;

	sockfd = socket (AF_INET, SOCK_DGRAM, 0);
	bzero ((char*)&serv_addr, sizeof (serv_addr));

	serv_addr.sin_family = AF_INET;
	inet_aton ("127.0.0.1", &serv_addr.sin_addr);
	serv_addr.sin_port = htons (3000);

	bzero ((char*) &client_addr, sizeof (client_addr));

	client_addr.sin_family = AF_INET;
	inet_aton ("127.0.0.1", &client_addr.sin_addr);
	client_addr.sin_port = htons (0);

	bind (sockfd, (struct sockaddr*)&client_addr, sizeof (client_addr));

	char msg[100] = "Hi this is S Abhishek!!";

	sendto (sockfd, msg, 20, 0, (struct sockaddr*)&serv_addr, sizeof (serv_addr));
	recvfrom (sockfd, msg, 20, 0, (struct sockaddr*)&client_addr, &client_len);

	printf ("%s", msg);

	return 1;
}

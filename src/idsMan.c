#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

const int PORT = 8888332;
const int BUFFERSIZE = 100;

int sockfd;

struct sockaddr_in address, clientAddr;
int clientAddrSize = sizeof(clientAddr);

int main(){

	char buffer[BUFFERSIZE];

	printf("I am the IDS managment system");

	createSocket();

	recvfrom(sockfd,buffer, sizeof(buffer),0,(struct sockaddr*)&clientAddr,&clientAddrSize);

	printf("%s", buffer);

	close(sockfd);
	return 0;
}

int createSocket(){

	sockfd = checkError(socket(AF_LOCAL, SOCK_DGRAM, 0), "Socket Failed");

	address.sin_family = AF_INET;
	address.sin_addr.s_addr = inet_addr("127.0.0.1");
	address.sin_port = htons(PORT);

	checkError(bind(sockfd, (struct sockaddr*)&address, sizeof(address)), "Error Binding");

	return 0;

}

int checkError(int output, char msg[]){
	if(output < 0){
		printf("%s",msg);
		exit(EXIT_FAILURE);
	}

	return output;
}


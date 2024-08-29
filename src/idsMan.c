#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <openssl/md2.h>

#include "include/Hash.h"
#include "include/errorHand.h"

const int PORT = 8888;
const int BUFFERSIZE = 100;

char filePath[] = "/home/biboy/ids/test";

int sockfd;

struct sockaddr_in address, clientAddr;
int clientAddrSize = sizeof(clientAddr);
char buffer[100] ="dwad";

int main(){

	printf("I am the IDS managment system\n");

	char *digest = hashFile("awdawd");

	printf("%s", digest);

	return 0;
}


void runSocket(){
	createSocket();

	printf("Listening for incoming messages...\n\n");

	checkError(recvfrom(sockfd,buffer, sizeof(buffer),0,(struct sockaddr*)&clientAddr,&clientAddrSize), "Cannot recive messages right now.");

	printf("%s", buffer);

	close(sockfd);
}

int createSocket(){

	sockfd = checkError(socket(AF_INET, SOCK_DGRAM, 0), "Socket Failed");

	address.sin_family = AF_INET;
	address.sin_addr.s_addr = inet_addr("127.0.0.1");
	address.sin_port = htons(PORT);

	checkError(bind(sockfd, (struct sockaddr*)&address, sizeof(address)), "Error Binding");

	return 0;

}
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include "errorHand.h"
#include "pCap.h"

const int MANAPORT = 8888;

struct sockaddr_in serverAddr;

char msg[] = "HELLO MANAGMENT SYSTEM";

int sockfd;

char IP[] = "127.0.0.1";

int main(){
	printf("Hello World");

	createSocket();

	close(sockfd);
}



//creates a socket to communicate with the IDS managment system 

int createSocket(){

	sockfd = checkError(socket(AF_INET, SOCK_DGRAM, 0), "Socket Failed");

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = inet_addr(IP);
	serverAddr.sin_port = htons(MANAPORT);

	 checkError(sendto(sockfd, msg, sizeof(msg), 0,(struct sockaddr*)&serverAddr, sizeof(serverAddr)), "Cannot send message");

	 printf("message Sent");
	return 0;

}
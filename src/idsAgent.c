#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

const int MANAPORT = 8888;

struct sockaddr_in serverAddr;

char msg[] = "HELLO MANAGMENT SYSTEM";

int sockfd;

int main(){
	printf("Hello World");

	createSocket();

	close(sockfd);
}


int createSocket(){

	sockfd = checkError(socket(AF_INET, SOCK_DGRAM, 0), "Socket Failed");

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	serverAddr.sin_port = htons(MANAPORT);

	 checkError(sendto(sockfd, msg, sizeof(msg), 0,(struct sockaddr*)&serverAddr, sizeof(serverAddr)), "Cannot send message");

	 printf("message Sent");
	return 0;

}


int checkError(int output, char msg[]){
	if(output < 0){
		perror(msg);
		exit(EXIT_FAILURE);
	}

	return output;
}
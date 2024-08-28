#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkError(int output, char msg[]){
	if(output < 0){
		perror(msg);
		exit(EXIT_FAILURE);
	}

	return output;
}
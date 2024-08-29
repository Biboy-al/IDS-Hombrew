#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/errorHand.h"

static int checkError(int output, char msg[]){
	if(output < 0){
		perror(msg);
		exit(EXIT_FAILURE);
	}

	return output;
}

static void* checkNull(void *output, char msg[]){
    if(output == NULL){
        perror(msg);
        exit(EXIT_FAILURE);
    }

    return output;
}

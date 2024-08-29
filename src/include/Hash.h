
#ifndef HASH
#define HASH


int startHash();

unsigned char* hashFile(char* path);



char *hashDirectory(char* path);

FILE *getObject(char* path);

int closeHash();

#endif
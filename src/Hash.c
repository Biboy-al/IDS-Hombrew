#include<stdio.h>
#include<string.h>
#include <openssl/err.h>
#include <openssl/evp.h>



int startHash(){
    OpenSSL_add_all_algorithms();
}

unsigned char* hashFile(char* path){
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    startHash();

    unsigned char digest[EVP_MAX_MD_SIZE] = "";

    EVP_DigestInit_ex(mdctx, EVP_sha256(), NULL);

    EVP_DigestUpdate(mdctx, path, strlen(path));

    EVP_DigestFinal_ex(mdctx, digest, NULL);

    printf("%s awdawdwad", digest);
    return (unsigned char*)"ada";
}



char *hashDirectory(char* path){
    
}

FILE *getObject(char* path){

}

int closeHash(){
    EVP_cleanup();
}
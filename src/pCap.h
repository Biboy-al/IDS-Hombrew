#include <stdio.h>
#include <pcap/pcap.h>
#include "errorHand.h"


class Sniffer{

    private: 

        pcap_t* sniffingAgent;
        char errorBuf[PCAP_ERRBUF_SIZE];
        struct pcap_pkthdr header;

        

    public:

        Sniffer(char interface[]){
            char* dev = pcap_lookupdev(interface);

            if(dev == NULL){
                printf("Cannot Find Interface.\n Exiting....");
            }

            sniffingAgent = pcap_open_live(interface, BUFSIZ, 0, 1000, errorBuf);

        }

        void capturePacket(){
            //will change this to a pcap_loop
            const u_char *curPacket = pcap_next(sniffingAgent, &header);
        }


        void setFilter(){

        }

        void snifferClose(){
            pcap_close(sniffingAgent);

        }

};
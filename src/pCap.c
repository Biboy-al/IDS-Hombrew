#include <stdio.h>
#include <pcap/pcap.h>

#include "include/errorHand.h"
#include "include/pCap.h"

struct sniffer *initSinffer(char *interface){

    struct sniffer *sniff;

    struct pcap_pkthdr header;
        
    char *dev = pcap_lookupdev(interface);

    checkNull(dev, "Cannot Find interface");

    sniff->interface = interface;

    pcap_t *cap = pcap_open_live(interface, BUFSIZ, 0, 1000, sniff->errorBuf);

    checkNull(sniff, "Cannot create sniffing agent");

    sniff->sniffer = cap;

    return sniff;

}

void startCap(struct sniffer *sniff, pcap_handler callback){
    pcap_loop(sniff->sniffer, -1, callback, NULL);
}

void stopCap(struct sniffer *sniff){

    pcap_close(sniff->sniffer);
}

#ifndef PCAP
#define PCAP

struct sniffer{

    char *interface;
    pcap_t *sniffer;
    char errorBuf[PCAP_ERRBUF_SIZE];
};

struct sniffer *initSinffer(char *interface);

void startCap(struct sniffer *sniff, pcap_handler callback);

void stopCap(struct sniffer *sniff);

#endif

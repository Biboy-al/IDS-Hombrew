

CC = gcc
dir = ~/project/src/build/
inc = ~/project/src/include/


idsAgent: $(dir)idsAgent.o $(dir)errorHand.o $(dir)pCap.o
	$(CC) $^ -o $@ -I$(inc) -lpcap


$(dir)idsAgent.o: idsAgent.c
	$(CC) -c $< -o $@ -I$(inc)

$(dir)errorHand.o: errorHand.c
	$(CC) -c $< -o $@ -I$(inc)

	
$(dir)pCap.o: pCap.c 
	$(CC) -c $< -o $@ -I$(inc) -lpcap

run: 
	./idsAgent

clean: 
	rm -f $(dir)*.o idsAgent
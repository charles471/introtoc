CC=gcc
CFLAGS=-I.
HEADERS = final.h

%.o: %.c $(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)

finalmake: final.o
	$(CC) -o final final.o -I.

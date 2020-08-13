CC = gcc
CFLAGS = -Wall -O2

prim:
	$(CC) $(CFLAGS) -o prim prim.c

clean:
	rm -f prim

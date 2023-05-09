CC = gcc
CFLAGS = -Wall -Ofast --static

main: prim.run prim_1000000.run

musl: prim_musl.run prim_musl_1000000.run

all: main musl

prim.run: prim.c
	$(CC) $(CFLAGS) -o prim.run prim.c

prim_musl.run: prim.c
	musl-gcc $(CFLAGS) -o prim_musl.run prim.c

prim_1000000.run: prim_1000000.c
	$(CC) $(CFLAGS) -o prim_1000000.run prim_1000000.c

prim_musl_1000000.run: prim_1000000.c
	musl-gcc $(CFLAGS) -o prim_musl_1000000.run prim_1000000.c


clean:
	rm -f prim.run
	rm -f prim_musl.run
	rm -f prim_1000000.run
	rm -f prim_musl_1000000.run

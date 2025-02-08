CC=gcc
CFLAGS=-Wall -Werror
OFLAGS=-O2

all: prog

prog: main.o $(ALG).o
	$(CC) $(OFLAGS) $(CFLAGS) main.o $(ALG).o -o prog

$(ALG).o: ./algorithms/pathfinder.h ./algorithms/$(ALG).c
	$(CC) $(OFLAGS) $(CFLAGS) -c ./algorithms/$(ALG).c

main.o: ./algorithms/pathfinder.h main.c
	$(CC) $(OFLAGS) $(CFLAGS) -DALG=$(ALG) -c main.c

clean:
	rm -f main.o $(ALG).o prog
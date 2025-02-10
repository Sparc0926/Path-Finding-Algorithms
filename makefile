CC=gcc
CFLAGS=-Wall -Werror
OFLAGS=-O2

all: prog

prog: main.o alg.o animate.o
	@ echo "linking into program"
	@ $(CC) $(OFLAGS) $(CFLAGS) main.o alg.o animate.o -o prog

alg.o: $(ALGDIR)/$(ALG).c
	@ echo "compiling $(ALG).c"
	@ $(CC) $(OFLAGS) $(CFLAGS) -c $(ALGDIR)/$(ALG).c -o alg.o

animate.o: ./Animator/Animator.c
	@ echo "compiling Animator.c"
	@ $(CC) $(OFLAGS) $(CFLAGS) -c ./Animator/Animator.c -o animate.o

main.o: main.c
	@ echo "compiling main.c"
	@ $(CC) $(OFLAGS) $(CFLAGS) -DALG=$(ALG) -c main.c -o main.o

clean:
	@ echo "cleaning up intermidiate files"
	@ rm -f main.o alg.o animate.o prog
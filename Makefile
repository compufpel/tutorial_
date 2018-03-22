CC=gcc

CFLAGS=-std=c11 -Wall -Werror
LDFLAGS=-lm

all: grade

fatorial.o: fatorial.c

fatorial: fatorial.o test.c

grade: fatorial
	./fatorial

clean:
	rm -rf *.o fatorial

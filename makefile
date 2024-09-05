CC=gcc
CFLAGS=-g

pratice1:pratice1.o
	$(CC) -o pratice1 pratice1.o
pratice1.o:pratice1.c 
	$(CC) -o pratice1.o pratice1.c 

clean:
	rm -f pratice1 pratice1.o 	
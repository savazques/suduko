#Standard Makefile 

CC = g++ -std=c++17
CFLAGS = -g

all: main

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.cpp 

main: main.o 
	$(CC) -o main main.o 

clean:
	rm -f  *.o *~ main
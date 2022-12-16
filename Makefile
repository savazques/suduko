#Standard Makefile 

CC = g++ -std=c++17
CFLAGS = -g

all: main

sudoku.o: sudoku.cpp
	$(CC) -c $(CFLAGS) sudoku.cpp

main.o: main.cpp 
	$(CC) -c $(CFLAGS) main.cpp 

main: main.o sudoku.o
	$(CC) -o main main.o sudoku.o 

clean:
	rm -f  *.o *~ main
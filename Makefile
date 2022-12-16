#Standard Makefile 

CC = g++ -std=c++17
CFLAGS = -g

all: sudoku 

sudoku.o: sudoku.cpp 
	$(CC) -c $(CFLAGS) sudoku.cpp 

sudoku: sudoku.o 
	$(CC) -o sudoku sudoku.o 

clean:
	rm -f  *.o *~ sudoku
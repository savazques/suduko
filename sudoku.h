#ifndef SUDOKU_
#define SUDOKU_

#include<iostream>
using namespace std; 

class Sudoku
{
private:

//attributes
    int row = 9; 

    int column = 9; 

    int **board;

public:

int level; 

//constructors
    Sudoku(); 
    
    Sudoku(int); 

//methods

    void newBoard(); 

    int getValue(int);
    
    void printBoard();

    void solveBoard();

};

#endif
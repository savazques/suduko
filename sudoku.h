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

public:

int level; 

//constructors
    Sudoku(); 
    
    Sudoku(int); 

//methods

    void newBoard(); 
    
    void printBoard();

    void solveBoard();

};

#endif
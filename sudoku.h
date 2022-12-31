#ifndef SUDOKU_
#define SUDOKU_

#include<iostream>
using namespace std; 

class Sudoku
{
private:

//attributes


    //int **board;

public:
    int row = 9; 

    int column = 9; 

    int board[9][9];

    int level; 

//constructors
    Sudoku(); 
    
    Sudoku(int); 

//methods

    void newBoard(); 

    int getValue(int);
    
    void printBoard(); 

    bool fillBoard();

    void solveBoard();

};

#endif
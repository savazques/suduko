#include  "sudoku.h"
#include <iostream>
#include <cstdlib> 


//defining constructors

    Sudoku::Sudoku()
    {
        this -> level = 0;
    } 

    Sudoku::Sudoku(int input)
    {
        this->level = input;
    }



//defining methods
    void Sudoku:: newBoard()
    {
        //3x3 matrix 
        row = row/3; //3
        cout<<row; 
        column = column/3; //3
        cout<<column; 

        int board[row][column]; //board[3][3]

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                int value = 0;

                board[i][j] = value;
                
            }
        }

    }

    int getValue(int arg)
    {
        arg = (rand() % 10) + 1;

        cout<<arg;
        return arg;
    }

    void Sudoku :: printBoard()
    {

    }

    void Sudoku :: solveBoard()
    {

    }

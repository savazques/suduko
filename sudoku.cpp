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
        row = 9; //3
        //cout<<row; 
        column = 9; //3
        //cout<<column; 

        int board[row][column]; //board[3][3]

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                int value = 0;

                board[i][j] = value;
                cout<<board[i][j]; 
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
        int r = 9; 
        int c = 9; 

        int mat[r][c]; 

        for (int m = 0; m < 9; m++)
        {
            for (int l = 0; l < c; l++)
            {
                cout << mat[r][c] << "\n"[l == c-1 ];
            }
        }

    }

    void Sudoku :: solveBoard()
    {

    }

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

        int board[row][column]; //board[9][9]

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                int value = getValue(0);

                board[i][j] = value;
                
            }
        }
    }
    
    int Sudoku :: getValue(int number) //assigning random number 1 - 9 to value;
    {  
        int value;
        value = (rand() % 9) + 1;

        return value;
    }

    void Sudoku :: printBoard()
    {   
        int board[row][column]; //board[3][3]

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout<< to_string(board[i][j]) + " ";
            }
            cout<< endl;
        }
        cout<<endl;

    }

    void Sudoku :: solveBoard()
    {

    }

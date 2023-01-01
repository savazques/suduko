#include  "sudoku.h"
#include <iostream>
#include <cstdlib>
#include <array>
#include <stdlib.h>
#include <algorithm> 
#include <math.h>

const int EMPTY = 0;

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

        //int board[row][column]; //board[9][9]

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                int value = getValue(0);

                board[i][j] = EMPTY; 
                
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
 //board[3][3]

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

    bool Sudoku :: fillBoard()
    {
        int row, col; 

        for (int i = 0; i < 9 * 9; i++)
        {   
            //essentially going through row by row
            row = i / 9; 
            col = i % 9;

            if (board[row][col] == EMPTY)

            {
                int value = getValue(EMPTY); 

                board[row][col] = value;  

                if(check(row,col,value))
                {
                    board[row][col] = value; 
                    return true;
                }
                else
                {
                    int newValue = getValue(EMPTY); 
                    board[row][col] = newValue;
                    return false;
                }
               

            }

            
        }
    }


    bool Sudoku :: check(int r, int c, int v)
    {
        for (int i = 1; i < c + 1; i++)
        {
            int num = board[r][i];         

            if (num == board[row][i - 1])
                {
                    return false;
                }
                else
                {
                    return true; 
                }
            }
        
        for (int k = 1; k < r + 1; k++)
        {
            int v = board[k][c];

            if(v == board[k - 1][c])
            {
                return false; 
            }
            else
            {
                return true;
            }
        }
        
    } 

    void Sudoku :: solveBoard()
    {

    }

#include <iostream>
#include "sudoku.cpp"
using namespace std; 


int main()
{
    int difficulty; 

    cout<<"Welcome to Suduko"<<"\n"<<
    "Select Difficulty"<<"\n"<<
    "1. Easy"<<"\n"<<
    "2. Medium"<<"\n"<<
    "3. Hard"<<"\n"<<
    "Enter 1 2 or 3: "<<endl;


    cin>>difficulty;

    

    int board[9][9];

    Sudoku sudoku(difficulty);  

    sudoku.newBoard(); 
    //sudoku.printBoard();
    sudoku.fillBoard();
    sudoku.printBoard();


    return 0; 
}
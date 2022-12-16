#include <iostream>
#include <vector>
using namespace std; 

int const N = 9; 
int const n = 3; 

void printBoard(vector<vector<int> > board)
{
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            cout<<board[i][j]<<endl;
        }
    }
}


int main()
{
    //intialiizng a matrix to get input of unsolved sudoku
    vector<vector<int> > board(N); 

    for (int i=0; i<N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            int game;
            cin>>game; 
            if(game>=0 && game<=N)
            {
                board[i].push_back(game); 
            }    
            else
            {
                    cout<<"Not Valid";                
            }
            
        }
    }
   printBoard(board);  

    return 0; 
}
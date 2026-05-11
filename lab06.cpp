#include <iostream>
using namespace std;

const int gridSize = 3;
char board[gridSize][gridSize] = {{'X', 'O', 'O'},
                                  {'X', 'O', 'X'},
                                  {'O', 'X', 'O'}};

bool row(char symbol){
    int count=0;
    for(int i=0;i<gridSize;i++){
        count=0;
        for(int j=0;j<gridSize;j++){
            if(board[i][j]==symbol){
            count++;
            }
            
        }
        if(count==gridSize){
        return 1;
    }
    }

   
    return 0;
}    

bool col(char symbol){
    int count=0;
    for(int i=0;i<gridSize;i++){
        count=0;
        for(int j=0;j<gridSize;j++){
            if(board[j][i]==symbol)
           count++;
        }

        if(count==gridSize){
        return 1;
          }  
          }
  
    return 0;
}            

bool diagonal(char symbol){
    // diagonal 1
      if(board[0][0]==symbol && board[1][1]==symbol && board[2][2]==symbol){
        return 1;
      }

      // diagona;l 2
       if(board[0][2]==symbol && board[1][1]==symbol && board[2][0]==symbol){
        return 1;
      }
      
      return 0;
}

bool winner(char symbol)
{
    if (col(symbol) || row(symbol) || diagonal(symbol))
    {
        return 1;
    }
    return 0;
}

main()
{
    if (winner('X'))
    {
        cout << "Winner is X ";
    }

    else if (winner('O'))
    {
        cout << "Winner is O ";
    }

    else
    {
        cout << "No one is winner ";
    }
}
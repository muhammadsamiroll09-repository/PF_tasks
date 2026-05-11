#include <iostream>
using namespace std;
const int gridSize = 3;
char board[gridSize][gridSize] = {{'O', 'O', 'O'},
                                  {'X', 'O', 'X'},
                                  {'X', 'X', 'O'}};

char winner( char symbol){
    //rows
    for(int i=0;i< gridSize ; i++){
        if(board[i][0]==symbol && board[i][1]==symbol && board[i][2]==symbol ) {
            return true;
          }
    }

          for(int i=0;i< gridSize ; i++){
        if(board[0][i]==symbol && board[1][i]==symbol && board[2][i]==symbol ) {
            return true;
          }
     }
         
        if(board[1][1]==symbol && board[2][2]==symbol && board[3][3]==symbol ) {
            return true;
        }
     

            
        if(board[0][1]==symbol && board[1][1]==symbol && board[2][2]==symbol ) {
            return true;
          }


     return false;
        
}

main(){
    if(winner('X')){
        cout<<"Winner Player is X";
    }
    else if(winner('O')){
         cout<<"Winner Player is O";
     }
     else{
        cout<<"No one is winner";
     }
}
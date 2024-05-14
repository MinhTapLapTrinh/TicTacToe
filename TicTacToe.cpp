#include <iostream>
using namespace std;
int main(){
    char board[3][3] = {
        {' ',' ',' '}, 
        {' ',' ',' '},
        {' ',' ',' '}
    };
    char playerX = 'X';
    char playerO = 'O';
    char CurrentPlayer = playerX;
    int r = -1;
    int c = -1;
    char winner = ' ';
    for(int i = 0; i < 9; i++){
    cout << " " << board[0][0] << " | " << board[0][1] << " |  " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " |  " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " |  " << board[2][2] << endl;
    cout << "Current player is " << CurrentPlayer << endl;
    
    while(true){
    cout << "Enter r c from 0-2 for row and collum: ";cin >> r >> c;
    if(r < 0 || r > 2 || c < 0 || c > 2) cout << "Invalid, try again." << endl;
    else if(board[r][c] != ' '){
        cout << "This place is full. Try again." << endl;
    } 
    else break;
    cin.clear();
    cin.ignore(1000, '\n');
    r = -1;
    c = -1;
    }
    board[r][c] = CurrentPlayer;

    if(CurrentPlayer == playerX){
        CurrentPlayer = playerO;
    }
    else CurrentPlayer = playerX;
    // hang ngang
    for(int i = 0; i < 3; i ++ )
    {if(board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]){
        winner = board[i][0];
        cout << "Player " << winner << " is the winner! " << endl;
        exit(0);
    }}
    // hang doc
    for(int i = 0; i < 3; i++ ){
        if(board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]){
        winner = board[0][i];
        cout << "Player " << winner << " is the winner! " << endl;
        exit(0);
        }
    }
    if(board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        winner = board[0][0];
        cout << "Player " << winner << " is the winner! " << endl;
        break;
    }
    if(board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        winner = board[0][2];
        cout << "Player " << winner << " is the winner! " << endl;
        break;
    }
  }
  // test git
    return 0;
}
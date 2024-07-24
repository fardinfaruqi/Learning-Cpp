#include <bits/stdc++.h>
using namespace std;

void printBoard(char board[3][3]){
    cout << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (j != 2) cout << board[i][j] << " | ";
            else cout << board[i][j];
        }
        cout << "\n---------\n";
    }
}

void game()
{
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}};
    char box;
    bool flag = true;
    int totalTurn = 9;
    while (true){
        printBoard(board);
        if(!totalTurn) break;
        if (flag) cout << "O's turn: ";
        else cout << "X's turn: ";
        cin >> box;
        if (box < '1' || box > '9') cout << "Wrong move..Try again.." << endl;
        else{
            bool x = true;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    if (board[i][j] == box){
                        if (flag) board[i][j] = 'O';
                        else board[i][j] = 'X';
                        totalTurn--; flag = !flag; x = false;
                        break;
                    }
                }
                if (!x) break;
            }
            if (x) cout << "Wrong move..Try again.." << endl;
        }
        bool isWin = false;
        char winner = ' ';
        // cout << (board[0][0] == board[1][1] == board[2][2]) << endl; 
        if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
            winner = board[1][1]; isWin = true;
        } else if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
            winner = board[1][1]; isWin = true;
        } else if(board[0][0] == board[0][1] && board[0][1] == board[0][2]){
            winner = board[0][0]; isWin = true;
        } else if(board[1][0] == board[1][1] && board[1][1] == board[1][2]){
            winner = board[1][0]; isWin = true;
        } else if(board[2][0] == board[2][1] && board[2][1] == board[2][2]){
            winner = board[2][0]; isWin = true;
        } else if(board[0][0] == board[1][0] && board[1][0] == board[2][0]){
            winner = board[0][0]; isWin = true;
        } else if(board[0][1] == board[1][1] && board[1][1] == board[2][1]){
            winner = board[0][1]; isWin = true;
        } else if(board[0][2] == board[1][2] && board[1][2] == board[2][2]){
            winner = board[0][2]; isWin = true;
        } 
        if(isWin){
            printBoard(board);
            cout << "\nGame over. " << winner << " wins..." << endl;
            break;
        }
    }
    return;
}

int main(){
    cout << "[Tic-Tac-Toe Using C++]\n[Enjoy your time...]" << endl;
    while (true){
        int a, b, c;
        cout << "Choose your option: 1 - Play, 2 - Exit : ";
        cin >> a;
        if (a == 1) game();
        else if (a == 2) break;
        else cout << "Wrong option. again..." << endl;
    }
    return 0;
}
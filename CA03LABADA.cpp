#include<bits/stdc++.h>
using namespace std;

const int queens = 8;

bool isSafe(vector<vector<int>> &board, int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i] == 1)
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j-- )
        if(board[i][j] == 1)
            return false;

    for (int i = row, j = col; i < queens && j >= 0; i++, j--)
        if(board[i][j] == 1)
            return false;

    return true;
}

bool solution(vector<vector<int>> & board, int col) {
    if (col == queens) {
        for (int i = 0; i < queens; i++) {
            for (int j = 0; j < queens; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        return true;
    }

    for (int i = 0; i < queens; i++) {
        if(isSafe(board, i, col)) {
            board[i][col] = 1;
            if(solution(board, col+1))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> board(queens, vector<int>(queens, 0));
    if(!solution(board, 0))
        cout<<"Solution not found!!!";
    return 0;
}

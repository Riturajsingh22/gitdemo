#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int n) {
    // Check column
    for (int i = 0; i < row; ++i)
        if (board[i][col] == 1)
            return false;

    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
        if (board[i][j] == 1)
            return false;

    // Check upper right diagonal
    for (int i = row, j = col; i >= 0 && j < n; --i, ++j)
        if (board[i][j] == 1)
            return false;

    return true;
}

bool solveNQueens(vector<vector<int>>& board, int row, int n) {
    if (row == n) {
        // Solution found, print the board
        for (auto& r : board) {
            for (int val : r)
                cout << (val ? "Q " : ". ");
            cout << endl;
        }
        cout << endl;
        return true; // Return false if you want all solutions
    }

    for (int col = 0; col < n; ++col) {
        if (isSafe(board, row, col, n)) {
            board[row][col] = 1;
            if (solveNQueens(board, row + 1, n))
                return true; // Return false if you want all solutions
            board[row][col] = 0; // Backtrack
        }
    }

    return false;
}

int main() {
    int n;
    cout << "Enter number of queens: ";
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n, 0));

    if (!solveNQueens(board, 0, n))
        cout << "No solution exists for " << n << " queens.\n";

    return 0;
}

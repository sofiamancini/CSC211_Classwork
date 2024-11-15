// Sodoku Checker

#include <iostream>

void buildBoard(int board[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cin >> board[i][j];
        }
    }
}

bool checkRow(int board[9][9], int row) {
    int check[9] = {0};
    for (int i = 0; i < 9; i++) {
        if (check[board[row][i] - 1] == 1) {
            return false;
        }
        check[board[row][i] - 1] = 1;
    }
    return true;
}

bool checkCol(int board[9][9], int col) {
    int check[9] = {0};
    for (int i = 0; i < 9; i++) {
        if (check[board[i][col] - 1] == 1) {
            return false;
        }
        check[board[i][col] - 1] = 1;
    }
    return true;
}

bool checkSquare(int board[9][9], int row, int col) {
    int check[9] = {0};
    for (int i = row; i < row + 3; i++) {
        for (int j = col; j < col + 3; j++) {
            if (check[board[i][j] - 1] == 1) {
                return false;
            }
            check[board[i][j] - 1] = 1;
        }
    }
    return true;
}

bool checkBoard(int board[9][9]) {
    for (int i = 0; i < 9; i++) {
        if (!checkRow(board, i) || !checkCol(board, i)) {
            return false;
        }
    }
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            if (!checkSquare(board, i, j)) {
                return false;
            }
        }
    }
    return true;
}       

int main() {
    int board[9][9];
    buildBoard(board);
    

    if (checkBoard(board) == true) {
        std::cout << "Solution is good!" << std::endl;
    } else {
        std::cout << "Wrong solution!" << std::endl;
    }
    return 0;
}
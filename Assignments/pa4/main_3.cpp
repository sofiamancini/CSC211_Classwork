// Sliding Puzzle

#include <iostream>
#include <vector>

void buildBoard(int board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> board[i][j];
        }
    }
}

void printBoard(int board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void moveBoard(int board[3][3], std::vector<char> *moves) {
    for (int i = 0; i < moves->size(); i++) {
        char move = moves->at(i);
        int row, col;
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                if (board[r][c] == 0) {
                    row = r;
                    col = c;
                    break;
                }
            }
        }
        if (move == 'U') {
            if (row == 0) {
                continue;
            }
            board[row][col] = board[row - 1][col];
            board[row - 1][col] = 0;
        } else if (move == 'D') {
            if (row == 2) {
                continue;
            }
            board[row][col] = board[row + 1][col];
            board[row + 1][col] = 0;
        } else if (move == 'L') {
            if (col == 0) {
                continue;
            }
            board[row][col] = board[row][col - 1];
            board[row][col - 1] = 0;
        } else if (move == 'R') {
            if (col == 2) {
                continue;
            }
            board[row][col] = board[row][col + 1];
            board[row][col + 1] = 0;
        }
    }
}

bool checkBoard(int board[3][3]) {
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 2 && j == 2) {
                if (board[i][j] != 0) {
                    return false;
                }
            } else {
                if (board[i][j] != count) {
                    return false;
                }
                count++;
            }
        }
    }
    return true;
}

int main() {
    int board[3][3];
    buildBoard(board);
    std::vector<char> moves;
    char move;
    while (std::cin >> move) {
        moves.push_back(move);
    }
    moveBoard(board, &moves);

    if (checkBoard(board) == true) {
        std::cout << "Solution is good!" << std::endl;
    } else {
        std::cout << "Wrong solution!" << std::endl;
    }
    return 0;

    return 0;
}
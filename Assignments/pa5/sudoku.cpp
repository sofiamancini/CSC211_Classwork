/*  Sudoku Overview:
 *
 *  Sudoku takes a file of comma-separated lines and uses
 *  it to store a sudoku board state as a 1D array of ints
 *  in row-major order.
 *
 *  For Programming Assignment 05, this class will be used to
 *  test problem 3.
 *
 *  Problem 3 will be tested by calling the solve member function
 *
 *  Note: in a proper C++ class you would have Getters and Setters
 *  however, here we don't do that since all values are changed
 *  internally from within the class itself.
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include "sudoku.h"

// reads a file containing comma-separated lines and creates a Sudoku object
Sudoku::Sudoku(const char *fname) {
    std::ifstream infile(fname); // Open file directly with the filename

    std::string line;
    for (int i = 0; i < 9; ++i) {
        if (!std::getline(infile, line)) {
            return;
        }
        std::stringstream ss(line);
        for (int j = 0; j < 9; ++j) {
            if (!(ss >> puzzle[i * 9 + j])) {
                return;
            }
            // Check if a comma exists after the number
            if (ss.peek() == ',') {
                ss.ignore();
            }
        }
    }

    infile.close();
}

// destruct object where not implicit to the program
Sudoku::~Sudoku() {
    // since we allocated memory on the heap, we must deallocate that memory
}

bool Sudoku::checkRow(int board[9][9], int row, int num) {
    // Check if the number is in the row
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == num) {
            return true;
        }
    }
    return false;
}

bool Sudoku::checkCol(int board[9][9], int col, int num) {
    // Check if the number is in the column
    for (int i = 0; i < 9; i++) {
        if (board[i][col] == num) {
            return true;
        }
    }
    return false;
}

bool Sudoku::checkSquare(int board[9][9], int row, int col, int num) {
    // Check if the number is in the 3x3 square
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num) {
                return true;
            }
        }
    }
    return false;
}

bool Sudoku::checkBoard(int board[9][9]) {
    // Check if the board is valid
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == 0) {
                continue;
            }
            if (checkRow(board, i, board[i][j]) || checkCol(board, j, board[i][j]) || checkSquare(board, i, j, board[i][j])) {
                return false;
            }
        }
    }
    return true;
}

bool Sudoku::findEmpty(int board[9][9], int &row, int &col) {
    // Find an empty cell
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (board[row][col] == 0) {
                return true;
            }
        }
    }
    return false;
}

bool Sudoku::isValid(int board[9][9], int row, int col, int num) {
    // Check if the number is valid
    return !checkRow(board, row, num) && !checkCol(board, col, num) && !checkSquare(board, row, col, num);
}

bool Sudoku::solveHelper(int board[9][9]) {
    // Solve the puzzle using backtracking
    int row, col;
    if (!findEmpty(board, row, col)) {
        return true;
    }
    for (int num = 1; num <= 9; num++) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num;
            if (solveHelper(board)) {
                return true;
            }
            board[row][col] = 0;
        }
    }
    return false;
}

void Sudoku::solve() {
    int board[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            board[i][j] = puzzle[(i * 9) + j];
        }
    }
    if (solveHelper(board)) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                puzzle[(i * 9) + j] = board[i][j];
            }
        }
    }
}

void Sudoku::print() {
    // Print the puzzle in 2D format
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if (j == 8) {
                std::cout << puzzle[(i * 9) + j];
                break;
            }
            std::cout << puzzle[(i * 9) + j] << ",";
        }
        std::cout << std::endl;
    }
}

// int main(int argc, char *argv[]) {
//     // declare variables
//     char *fname = argv[1];

//     // create a Sudoku object
//     Sudoku mySudoku(fname);

//     // example test call for problem #3
//     mySudoku.solve();

//     mySudoku.print();

//     return 0;
// }
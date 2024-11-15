// The Game of Life

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Function the create a board based on user input for rows and columns
int board(std::vector<std::vector<char>> &arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        std::vector<char> row;
        for (int j = 0; j < cols; j++) {
            char cell;
            std::cin >> cell;
            row.push_back(cell);
        }
        arr.push_back(row);
    }
}

// Function to print the board
void printBoard(std::vector<std::vector<char>> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            std::cout << arr[i][j];
            if (j != arr[i].size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

// Function to implement the rules of the game
void gameOfLife(std::vector<std::vector<char>> &arr, int rows, int cols, int gens) {
    // Create a new array to store the next generation
    std::vector<std::vector<char>> newArr;
    // Populate the new array with the current generation from user input
    for (int i = 0; i < rows; i++) {
        std::vector<char> row;
        for (int j = 0; j < cols; j++) {
            row.push_back(arr[i][j]);
        }
        newArr.push_back(row);
    }
    for (int g = 0; g < gens; g++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int count = 0;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if (x == 0 && y == 0) {
                            continue;
                        }
                        int r = i + x;
                        int c = j + y;
                        if (r < 0 || r >= rows || c < 0 || c >= cols) {
                            continue;
                        }
                        if (arr[r][c] == '*') {
                            count++;
                        }
                    }
                }
                if (arr[i][j] == '*') {
                    if (count < 2 || count > 3) {
                        newArr[i][j] = '.';
                    }
                } else {
                    if (count == 3) {
                        newArr[i][j] = '*';
                    }
                }
            }
        }
        arr = newArr;
    }
}


// Main function
int main() {
    int rows, cols, gens;
    std::cin >> rows >> cols >> gens;
    std::vector<std::vector<char>> arr;
    board(arr, rows, cols);

    gameOfLife(arr, rows, cols, gens);

    printBoard(arr);


    return 0;
}
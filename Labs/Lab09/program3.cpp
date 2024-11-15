#include <iostream>
#include <vector>

void fillBoard(std::vector<std::vector<int>> &chessboard) {
    for(int i = 0; i < chessboard.size(); i++) {
        for(int j = 0; j < chessboard.size(); j++) {
            chessboard.at(i).push_back(0);
        }
    }
}

void printBoard(std::vector<std::vector<int>> chessboard) {
    for(int i = 0; i < chessboard.size(); i++) {
        for(int j = 0; j < chessboard.at(i).size(); j++) {
            std::cout << chessboard[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void nQueens(std::vector<std::vector<int>> chessboard, int size) {
    if(size < 3) {
        return;
    }
    for(int i = 0; i < chessboard.size(); i++) {
        for(int j = 0; j < chessboard.at(i).size(); j++) {
            

        }
    }
    
}


int main() {
    int size;
    std::cin >> size;
    std::vector<std::vector<int>> chessboard(size);
    fillBoard(chessboard);
    nQueens(chessboard);
    printBoard(chessboard);


}
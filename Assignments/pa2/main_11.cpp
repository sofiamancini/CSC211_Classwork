#include <iostream>

int main() {
    char stop;
    std::cin >> stop;
    int rows = stop - 'A' + 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            std::cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            std::cout <<char('A' + j);
            if (j < i) {
                std::cout << " ";
            }   
        }
        for (int j = i - 1; j >= 0; j--) {
            std::cout << " ";
            std::cout << char('A' + j);
        }
        std::cout << std::endl;
    }
    return 0;
}
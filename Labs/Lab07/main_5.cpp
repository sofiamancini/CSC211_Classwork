// This program will return a multiplication table

#include <iostream>
#include <vector>

void printTable(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    printTable(n);
    return 0;
}
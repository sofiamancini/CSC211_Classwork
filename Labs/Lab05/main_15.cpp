#include <iostream>

void pyrimad(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) { 
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j > 9) {
                std::cout << ((j%10) + 1);
            } else {
            std::cout << (j + 1);
            }
        }
        std::cout << std::endl;
    }  
}

int main () {
    int n;
    std::cin >> n;
    pyrimad(n);
    return 0;
}
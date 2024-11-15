#include <iostream>

int main() {
    int num, count;
    std::cin >> num;
    count = num;
    if (num > 0 && num < 10) {
        if (num % 2 == 0) {
            std::cout << "Sorry, not odd" << std::endl;
        } else {
            for (int i = 1; i <= count; i++) {
                for (int j = 1; j <= count; j++) {
                    if (i == j || j == (count - i + 1)) {
                        std::cout << "*";
                    } else {
                        std::cout << " ";
                    }
                }
                std::cout << std::endl;
            }
        }
    }
    return 0;
}
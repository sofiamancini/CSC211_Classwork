#include <iostream>

int main () {
    int num;
    std::cin >> num;
    if (num > 0 && num < 20) {
            for(int i = num ; i > 0 ; i--) {
                for (int j = 1 ; j <= num ; j ++) {
                    if (j >= i) {
                        std::cout << "*";
                    } else {
                        std::cout << " ";
                    }
                }
                std::cout << std::endl;
            }
    }

    return 0;
}
#include <iostream>
#include <cmath>

int main() {
    int originalNum, num, sum = 0;
    std::cin >> num;
    originalNum = num;

    if (num > 0 && num < pow(10, 4)) {
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == originalNum) {
            std::cout << "True" << std::endl;
        } else {
            std::cout << "False" << std::endl;
        }
    }
    return 0;
    }

#include <iostream>
#include <cmath>

int main() {
    int originalNum, num, sum = 0, len = 1;

    std::cin >> num;
    originalNum = num;
    if (num > 0) {
        for (len = 0; num > 0; len++) {
            num /= 10;
        }
    }
    num = originalNum;
    if (num > 0 && num < pow(10, 9)) {
        for (int i = 0; i < len; i++) {
            sum += pow(num % 10, len);
            num /= 10;
        }   
    }

    if (sum == originalNum) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
    }

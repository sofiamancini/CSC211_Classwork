#include <iostream>
#include <cmath>

int numDigits(int num) {
    int len = 0;
    while (num > 0) {
        len++;
        num /= 10;
    }
    return len;
}

void shiftLeft (int num) {
    int lengthNum = numDigits(num);
    int power = pow(10, lengthNum - 1);
    bool isPrime = true;
    for (int i = 0; i < lengthNum; i++) {
        int firstDigit = num / power;
        int rest = (num % power) * 10 + firstDigit;
        // std::cout << rest << std::endl;
        num = rest;
        
        if (rest <= 1 || (rest > 2 && rest % 2 == 0)) {
            isPrime = false;
        } else {
            for (int i = 3; i * i <= rest; i += 2) {
                if (rest % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
    }
    if (isPrime) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}

int main() {
    int num;
    std::cin >> num;
    if (num > 0 && num < pow(10, 6)) {
        shiftLeft(num);
    }
    return 0;
}
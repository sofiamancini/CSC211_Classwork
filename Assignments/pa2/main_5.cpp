#include <iostream>

int main () {
    int num;
    bool isPrime = true;
    std::cin >> num;
    if (num > 0 && num <= 1000000000) { 
        if (num <= 1 || (num > 2 && num % 2 == 0)) {
            isPrime = false;
        } else {
            for (int i = 3; i * i <= num; i += 2) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            std::cout << "True" << std::endl;
        } else {
            std::cout << "False" << std::endl;
        }
    }
return 0;
}
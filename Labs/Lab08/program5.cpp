#include <iostream>

int sum_digits(int n) {
    if(n/10 == 0) {
        return n;
    }
    return (n % 10) + sum_digits(n/10);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << sum_digits(n) << std::endl;
}
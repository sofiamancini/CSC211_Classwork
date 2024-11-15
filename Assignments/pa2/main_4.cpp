#include <iostream> 

long int power (int base, int exponent) {
    long int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exponent;
    std::cin >> base >> exponent;
    std::cout << power(base, exponent) << std::endl;
    return 0;

}
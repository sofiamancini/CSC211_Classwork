// This code uses recursion to find the GCD (Greatest Common Divisor) of two numbers.

#include <iostream>

int gcd(int a, int b) {
    if (b == 0 || a == 0) {
        return 0;
    }
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << std::endl;
    return 0;
}
    
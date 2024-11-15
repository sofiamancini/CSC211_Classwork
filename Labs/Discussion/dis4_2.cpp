#include <iostream>

void power (int num, int exp, long int &result) {
    result = num;
    for (int i = 0; i < exp-1; i++) {
        result *= num;
    }
}

int main () {
    int num_in, exp_in;
    long int result;
    std::cin >> num_in >> exp_in;
    power(num_in, exp_in, result);
    std::cout << result << std::endl;
    return 0;
}
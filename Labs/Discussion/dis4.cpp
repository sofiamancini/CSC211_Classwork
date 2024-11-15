#include <iostream>

long int power (int num, int exp) {
    int temp = num;
    for (int i = 0; i < exp-1; i++) {
        temp *= num;
    }
    return temp;
}   

int main () {
    int num_in, exp_in;
    std::cin >> num_in >> exp_in;
    std::cout << power(num_in, exp_in) << std::endl;
    return 0;
}
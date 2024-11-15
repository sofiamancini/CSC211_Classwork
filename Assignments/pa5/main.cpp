#include <iostream>

void foo (int *ptr, int &q) {
    std::cout << *ptr << " " << q << std::endl;
    (*ptr)++;
    std::cout << *ptr << " " << q << std::endl;
    ptr = &q;
    std::cout << *ptr << " " << q << std::endl;
    (*ptr) *= 4;
    std::cout << *ptr << " " << q << std::endl;
}

int main () {
    int val1 = 3;
    int val2 = 7;

    foo(&val1, val2);
    std::cout << val1 << " " << val2 << std::endl;
}
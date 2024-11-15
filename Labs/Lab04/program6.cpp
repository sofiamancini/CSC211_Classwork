#include <iostream>

int main () {
int n = 7;
    for (int i =0; i < n; i+=2) {
        for (int j =0; j < (i+1); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
// This program will return the max of a given set of integers

#include <iostream>
#include <vector>

void findMax(int * n, int size, int &max) {
    max = n[0];
    for (int i = 0; i < size; i++) {
        if (n[i] > max) {
            max = n[i];
        }
    }
}

int main() {
    int max, size = 10;
    int *n = new int[size];

    for(int i = 0 ; i < size ; i++) {
        std::cin >> n[i];
    }

    findMax(n, size, max);
    std::cout << max << std::endl;

    delete[] n;

    return 0;
}
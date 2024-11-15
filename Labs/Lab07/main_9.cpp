// This code will implement a function that calculates the mean, median, and mode of an array of numbers.

#include <iostream>
#include <vector>

void findStats(int * n, int size, int &mean, int &median, int &mode) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += n[i];
    }
    mean = sum / size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (n[j] > n[j + 1]) {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }
    if (size % 2 == 0) {
        median = (n[size / 2] + n[size / 2 - 1]) / 2;
    } else {
        median = n[size / 2];
    }
    int maxCount = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (n[j] == n[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = n[i];
        }
    }
}

int main() {
    int mean, median, mode, size = 10;
    int *n = new int[size];

    for(int i = 0 ; i < 10 ; i++) {
        n[i] = i;
    }
    findStats(n, 10, mean, median, mode);
    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Median: " << median << std::endl;
    std::cout << "Mode: " << mode << std::endl;

    delete[] n;

    return 0;
}
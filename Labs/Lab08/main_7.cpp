// This code will take an array of integers and return the sum of all the elements in the array

#include <iostream>


int sum(int *arr, int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
    int arr[] = {5, 45, 1, 0};

    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << sum(arr, n) << std::endl;
    return 0;
}
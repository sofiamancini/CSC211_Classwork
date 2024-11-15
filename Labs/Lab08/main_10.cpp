// This code will determine if a list is sorted in incresing order

#include <iostream>
#include <vector>

bool is_sorted(int *arr, int n) {
    if (n == 1) {
        return true;
    }
    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }
    return is_sorted(arr, n - 1);
}

int main() {
    int arr[] = {1, 5, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (is_sorted(arr, n)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
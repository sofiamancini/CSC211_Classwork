// This code will separate an array into evens and odds

#include <iostream>
#include <vector>

void split(std::vector<int> &arr, std::vector<int> &evens, std::vector<int> &odds) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evens.push_back(arr[i]);
        } else {
            odds.push_back(arr[i]);
        }
    }
}

int main() {
    // std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> arr;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        arr.push_back(x);
    }
    std::vector<int> evens;
    std::vector<int> odds;

    split(arr, evens, odds);

    for (int i = 0; i < evens.size(); i++) {
        std::cout << evens[i] << " ";
    }
    std::cout << std::endl;


    for (int i = 0; i < odds.size(); i++) {
        std::cout << odds[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
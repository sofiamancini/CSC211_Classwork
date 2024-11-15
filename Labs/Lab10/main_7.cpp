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
    // std::vector<int> arr;
    // int value;
    // while (std::cin >> value) {
    //     arr.push_back(value);
    // }
    std::vector<int> arr = {36, 46, 33, 31, 24, 11, 27, 3, 1, 24, 23, 29};
        std::vector<int> evens;
        std::vector<int> odds;

        split(arr, evens, odds);

        for (int i = 0; i < evens.size(); i++) {
            if (i == evens.size() - 1) {
                std::cout << evens[i] << std::endl;
            } else {
                std::cout << evens[i] << " ";
            }
        }
        for (int i = 0; i < odds.size(); i++) {
            if (i == odds.size() - 1) {
                std::cout << odds[i] << std::endl;
            } else {
                std::cout << odds[i] << " ";
            }
        }
    
}

#include <iostream>
#include <vector>

void multiModify(std::vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 3 == 0) {
            arr[i] *= 3;
        } 
        if (arr[i] % 2 == 0) {
            arr[i] *= 2;
        }
    }
}

int main() {

    std::vector<int> arr;
    int value;
    while (std::cin >> value) {
        arr.push_back(value);
    }

    multiModify(arr);

    for (int i = 0; i < arr.size(); i++) {
        if (i == arr.size() - 1){
            std::cout << std::endl;
        } else {
            std::cout << arr[i] << " ";
        }
    }

    return 0;
}
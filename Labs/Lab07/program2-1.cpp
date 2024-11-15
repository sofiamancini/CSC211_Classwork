#include <iostream>

void countEvens(int arr[], int *pointer) {
    int evens = 0;
    for(int i =0; i < *pointer; i++) {
        if(arr[i] % 2 == 0) {
            evens++;
        }
    }
    std::cout << evens << std::endl;

}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = 10;

    countEvens(arr, &length);



}
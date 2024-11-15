#include <iostream>
#include <cmath>

void print_arr(int* arr, int n){
    if (n == 0){
        return;
    }
    print_arr(arr, n-1);
    std::cout << arr[n-1] << " ";
    
}

int main(){
    int num = 6;
    int arr[] = {1,2,3,4,5,6};
    print_arr(arr, num);
    return 0;
}
#include <iostream>
#include <cmath>

int fib(int n){
    if(n == 0){
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main(){
    int num = 6;
    std::cout << fib(num) << std::endl;

    return 0;
}
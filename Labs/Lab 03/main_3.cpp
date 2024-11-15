#include <iostream>

int main(){
    int num;
    std::cin >> num;

    if (num % 2 != 0 && num >= 0 && num % 3 != 0 && num % 5 != 0) {
        std::cout << "Prime" << std::endl;
    }

    else {
        std::cout << "Not Prime" << std::endl;
    }
     return 0;
}

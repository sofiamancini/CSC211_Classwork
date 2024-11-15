#include <iostream>

int main(){
    char letter;
    std::cin >> letter;

    if (int(letter) >= 65 && int(letter) <= 90){
        std::cout << "upper-case";
    }
    else if (int(letter) >= 97 && int(letter) <= 122){
        std::cout << "lower-case";
    }
    return 0;
}
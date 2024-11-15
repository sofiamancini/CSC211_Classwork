// This code will take a string and print it's reverse.

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    for (int i = input.length() - 1; i >= 0; i--) {
        std::cout << input[i];
    }
    std::cout << std::endl;
    return 0;
}
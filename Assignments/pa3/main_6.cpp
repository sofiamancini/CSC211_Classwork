// This code will convert a string to its ASCII values and return the sum of the ASCII values

#include <iostream>
#include <string>

int main() {
    std::string input;
    int sum = 0;
    std::getline(std::cin, input);

    for (int i = 0; i < input.size(); i++) {
        sum += (int)input[i];
    }
    std::cout << sum << std::endl;
    return 0;
}
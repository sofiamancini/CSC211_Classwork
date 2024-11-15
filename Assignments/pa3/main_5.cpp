// This code should remove all duplicate letters in the input string

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::string output;

    if (input.empty()) {
        std::cout << output << std::endl;
        return 0;
    }

    output += input[0];

    for (int i = 1; i < input.size(); i++) {
        if (input[i] != input[i - 1]) {
            output += input[i];
        }
    }
    std::cout << output << std::endl;
    return 0;
}
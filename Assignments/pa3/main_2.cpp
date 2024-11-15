// This code will take a string and check to see if its a palindrome.

#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string input;
    std::getline(std::cin, input);

    for (char &c : input) {
        c = std::tolower(c);
        }
        
    int length = input.length();
    bool is_palindrome = true;
    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    if (is_palindrome) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
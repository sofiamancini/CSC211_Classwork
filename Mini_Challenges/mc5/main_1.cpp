// This code should fix broken 'backspace' button and delete '<' plus the character before it.

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::string output;
    std::cin >> input;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '<') {
            if (output.size() > 0) {
                output.pop_back();
            }
        } else {
            output.push_back(input[i]);
        }
    }
    std::cout << output << std::endl;
    return 0;
}
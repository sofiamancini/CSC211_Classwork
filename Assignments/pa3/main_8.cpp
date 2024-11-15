// This code will output the number of unique characters in a given string

#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);
    int count = 0;

    for (int i = 0; i < input.size(); i++) {
        bool is_unique = true;
        for (int j = 0; j < i; j++) {
            if (input[i] == input[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique == true) {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
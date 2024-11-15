// This code will test two emails to see if they map to the same address

#include <iostream>
#include <string>

// This function will change any upper case letters to lower case

void to_lower(std::string &input) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + 32;
        }
    }
}

// This function will remove any '.' from the input string

void remove_dots(std::string &input) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '.') {
            input.erase(i, 1);
            i--;
        }
    }
}

// This function will remove any '+' and any characters after it from the input string until it reaches a '@'

void remove_plus(std::string &input) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '@') {
            break;
        }
        if (input[i] == '+') {
            input.erase(i, input.find('@') - i);
            break;
        }
    }
}

int main() {
    std::string email1, email2;
    std::getline(std::cin, email1, ' ');
    std::getline(std::cin, email2);

    to_lower(email1);
    to_lower(email2);
    remove_dots(email1);
    remove_dots(email2);
    remove_plus(email1);
    remove_plus(email2);

    if (email1 == email2) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
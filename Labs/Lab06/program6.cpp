// Program to run a function that turns all the characters in a string to uppercase or lower case.

#include <iostream>

void all_to(char str[], bool caps) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (caps) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
            }
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += 32;
            }
        }
    }
}

int main() {
    char str[] {"hello"};

    for (int i = 0; i <= std::size(str); i++) {
        if (str[i] < 122 && str[i] > 97) {
            all_to(str, true);
        } else if (str[i] < 90 && str[i] > 65){
            all_to(str, false);
        }
    }
    std::cout << str << std::endl;
    return 0;
}
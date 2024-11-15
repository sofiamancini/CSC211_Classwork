// Program to remove to first instance of a character in a string

#include <iostream>

void(remove_first(char str[], char c)) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            for (int j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            break;
        }
    }
}

int main() {
    char str[] {"hello"};
    remove_first(str, 'l');
    std::cout << str << std::endl;
    return 0;
}
#include <iostream>

unsigned int string_len(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    char myString[] = "Hello, World!";
    std::cout << string_len(myString) << std::endl;

}
#include <iostream>

void replace(char str[], char a, char b) {
    int i = 0;
    while(str[i] != '\0') {
        if (str[i] == a) {
            str[i] = b;
        }
        std::cout << str[i];
        i++;
    }

}

int main() {
    char myArray[] = "llllaaaaa";
    replace(myArray, 'a', 'b');
}
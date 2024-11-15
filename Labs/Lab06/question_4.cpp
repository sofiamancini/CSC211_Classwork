#include <iostream>
#include <string>

int main() {
    std::string hello1 = "Hello, world";

    char hello [10];

    std::size_t length = hello1.copy(hello,5,0);

    //the first parameter is the string to copy to
    //the second parameter is the number of characters to copy
    //the third parameter is the character to start copying from

    hello[length] = '\0';

    std::cout << hello;

    return 0;
}

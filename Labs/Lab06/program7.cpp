// Program to sum two numbers separated by a space.

#include <iostream>
#include <sstream>

int main() {
    std:: string data;
    std::getline(std::cin, data);
    int intValue, sum = 0;
    std::string stringValue;
    std::istringstream iss(data);
    while (std::getline(iss, stringValue, ' ')) {
        std::istringstream iss2(stringValue);
        iss2 >> intValue;
        sum += intValue;
    }
    std::cout << sum << std::endl;
    return 0;
}
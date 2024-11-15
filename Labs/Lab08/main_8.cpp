// This code will determine if a string is a palidrome

#include <iostream>
#include <string>

bool pali(std::string str) {
    if (str.length() <= 1) {
        return true;
    }
    if (str[0] != str[str.length() - 1]) {
        return false;
    }
    return pali(str.substr(1, str.length() - 2));
}

int main() {
    std::string str = "homie";
    if (pali(str)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}
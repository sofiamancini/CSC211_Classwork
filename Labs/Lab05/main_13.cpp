#include <iostream>
#include <string>

int numDigits (int n) {
    std::string findLength = std::to_string(n);
    int temp = findLength.length();
    return temp;
}

int main () {
    int n;
    std::cin >> n;
    std::cout << numDigits(n) << std::endl;

    return 0;

}
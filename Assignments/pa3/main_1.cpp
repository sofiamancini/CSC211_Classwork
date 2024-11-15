// This code should read in a list of integers and return a count of the number of times the first input occurs.

#include <iostream>

int main() {
    int first, count = 1, input;
    std::cin >> first;
    while (std::cin >> input) {
        if (input == first) {
            count++;
        }
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
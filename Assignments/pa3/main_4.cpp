// This code will determine if a sequence of integers is sorted or not

#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::vector<int> input;
    std:: string input_line;

    std::getline(std::cin, input_line);
    std::istringstream iss(input_line);
    int number;
    while (iss >> number) {
        input.push_back(number);
    }

    bool is_sorted = true;
    for (int i = 0; i < input.size() - 1; i++) {
        if (input[i] < input[i + 1]) {
            is_sorted = false;
            break;
        } 
    
    }
    if (is_sorted == false) {
        std::cout << "Not Sorted" << std::endl;
    } else {
        std::cout << "Sorted" << std::endl;
    }

    return 0;
}
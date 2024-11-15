// Program to read a string of words separated by spaces and calculate the number of words.

#include <iostream>
#include <sstream>

int main () {
    std:: string words;
    std::getline(std::cin, words);
    int count = 0;
    std::string word;
    std::istringstream iss(words);
    while (std::getline(iss, word, ' ')) {
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}
#include <iostream>
#include <string>

int main() {

    int number;
    std::string numberName;
    std::cin >> number;

    switch(number) {
        case 0:
            numberName = "Zero";
            break;
        case 1:
            numberName = "One";
            break;
        case 2:
            numberName = "Two";
            break;
        case 3:
            numberName = "Three";
            break;
        case 4:
            numberName = "Four";
            break;
        case 5:
            numberName = "Five";
            break;
        case 6:
            numberName = "Six";
            break;
        case 7:
            numberName = "Seven";
            break;
        case 8:
            numberName = "Eight";
            break;
        case 9:
            numberName = "Nine";
            break;
    }

    if (number < 0 || number > 9) {
        numberName = "Not a valid number";
    }
    std::cout << numberName << std::endl;

    return 0;
}
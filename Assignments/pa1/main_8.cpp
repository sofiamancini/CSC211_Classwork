#include <iostream>
#include <cmath>

int main()
{

    int num, lastDigit, absNum;

    std::cin >> num;

    absNum = std::abs(num);
    lastDigit = absNum % 10;
    if (lastDigit == 9) {
        std::cout << num << " is good" << std::endl;
    } else
        std::cout << num << " is no good" << std::endl;
    
    return 0;
}
#include <iostream>

int main()
{

    int num;

    std::cin >> num;

    if (num < 0 ){
        std::cout << num << " is negative" << std::endl;
    } else if (num > 0) {
        std::cout << num << " is positive" << std::endl;
    } else
        std::cout << num << " is neither positive nor negative" << std::endl;
    return 0;
}
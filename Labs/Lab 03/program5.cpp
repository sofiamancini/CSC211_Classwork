#include <iostream>

int main()
{

    int num;
    
    std::cin >> num;

    if (num % 2 == 0)
    {
        std::cout << "1";
    }
    if (num % 2 != 0)
    {
        std::cout << "2";
    }
    if (num % 2 == 0) {
        std::cout << "3";
    }
    if (num % 3 == 0) {
        std::cout << "4";
    }

    std::cout << std::endl;

    return 0;
}
#include <iostream>

int main()
{

    int num;

    std::cin >> num;

    if (num % 8 ==0 && num > 100 ){
        std::cout << num << " satisfies the criteria" << std::endl;
    } else
        std::cout << num << " does not satisfy the criteria" << std::endl;
    return 0;
}
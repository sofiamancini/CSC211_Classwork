#include <iostream>

int main()
{
    int low, high, test;

    std:: cin >> low >> high >> test;

    if (test < low || test > high)
    {
        std::cout << "Out of bounds" << std::endl;
    }
    else
    {
        std::cout << "In bounds" << std::endl;
    }
    
    return 0;
}

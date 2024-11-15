#include <iostream>
#include <iomanip>

int main()
{
    double num1, num2, num3, avg;
    std::cin >> num1 >> num2 >> num3;
    avg = (num1 + num2 + num3) / 3;
    std::cout << std::fixed << std::setprecision(4) << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << avg << std::endl;

    return 0;
}
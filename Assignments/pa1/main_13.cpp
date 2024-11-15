#include <iostream>

int main()
{

    int num1, num2, num3, small;
    
    std::cin >> num1 >> num2 >> num3;
    
    small = num1;

    if (num1 < num2) {
        if (num1 < num3){
            small = num1;
        } else {
            small = num3;
        }
    } else if (num1 > num2) {
        if (num2 < num3) {
            small = num2;
        } else {
            small = num3;
        }
    }

    std::cout << "The smallest number entered was " << small << std::endl;

    return 0;
}
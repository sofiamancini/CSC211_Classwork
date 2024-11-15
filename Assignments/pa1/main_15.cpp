#include <iostream>

int main()
{
    double celcius, fahrenheit;
    std::cin >> celcius;
    fahrenheit = celcius * 9 / 5 + 32;

    if (fahrenheit <= 32) {
        std::cout << "It is cold out" << std::endl;
    } else if (fahrenheit > 32 && fahrenheit <= 65) {
        std::cout << "Wear a jacket" << std::endl;
     } else {
        std::cout << "It is nice out" << std::endl;
    }
    return 0;
}
#include <iostream>
#include <iomanip>

int main()
{
    double temp, celcius, fahrenheit;
    char T;
    std::string sys;

    std::cin >> temp >> T;

    if (T == 'C' || T == 'c') {
        sys = "F";
        celcius = temp;
        fahrenheit = celcius * 9 / 5 + 32;
        std::cout << std::fixed << std::setprecision(4) << temp << " degree(s) " << T << " is equal to " << fahrenheit << " degree(s) " << sys << std::endl;
    } else if (T == 'F' || T == 'f') {
        sys = "C";
        fahrenheit = temp;
        celcius = (fahrenheit - 32) * 5 / 9;
        std::cout << std::fixed << std::setprecision(4) << temp << " degree(s) " << T << " is equal to " << celcius << " degree(s) " << sys << std::endl;
    }

    return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

int main () {
    double inches, feet, yards, centimeters, meters;
    std::cin >> inches;
    feet = inches / 12;
    yards = feet / 3;
    centimeters = inches * 2.54;
    meters = centimeters / 100;
    std::cout <<"You entered" << inches << "Which converts to " << feet << "feet" << std::endl;
    return 0;

}
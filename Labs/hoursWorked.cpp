#include <iostream>

int main () {
    int hours, salary, flatRate = 35, overtime = 50;
    std::cout << "Enter hours worked: ";
    std::cin >> hours;

    if (hours <= 40) {
        salary = hours * flatRate;
    } else {
        salary = (40 * flatRate) + ((hours - 40) * overtime);
    }

    std::cout << "Salary is " << salary << std::endl;
    return 0;

}
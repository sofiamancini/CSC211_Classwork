#include <iostream>

int main() {

    int month, day, year;

    std::cin >> month >> day >> year;
    
    if (month == 1) {
        std::cout << "January " << day << "," << " " << year << std::endl;
    } else if (month == 2){
        std::cout << "February " << day << "," << " " << year << std::endl;
    } else if (month == 3){
        std::cout << "March " << day << "," << " " << year << std::endl;
    } else if (month == 4){
        std::cout << "April " << day << "," << " " << year << std::endl;
    } else if (month == 5){
        std::cout << "May " << day << "," << " " << year << std::endl;
    } else if (month == 6){
        std::cout << "June " << day << "," << " " << year << std::endl;
    } else if (month == 7){
        std::cout << "July " << day << "," << " " << year << std::endl;
    } else if (month == 8){
        std::cout << "August " << day << "," << " " << year << std::endl;
    } else if (month == 9){
        std::cout << "September " << day << "," << " " << year << std::endl;
    } else if (month == 10){
        std::cout << "October " << day << "," << " " << year << std::endl;
    } else if (month == 11){
       std::cout << "November " << day << "," << " " << year << std::endl;
    } else if (month == 12) {
        std::cout << "December " << day << "," << " " << year << std::endl;
    } else {
        std::cout << "Imaginary month" << std::endl;
    }

    return 0;
}
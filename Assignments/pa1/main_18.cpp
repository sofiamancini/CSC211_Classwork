#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int day, month, year, yearPart, century, weekDay;
    std::string weekDayOutput;

    std::cin >> day >> month >> year;

    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    yearPart = year % 100;
    century = year / 100;
    weekDay = (day + (((month + 1) *26)/10) + yearPart + (yearPart/4) + (century/4) + 5*century) % 7;

    switch (weekDay) {
        case 0:
            weekDayOutput = "Saturday";
            break;
        case 1:
            weekDayOutput = "Sunday";
            break;
        case 2:
            weekDayOutput = "Monday";
            break;
        case 3:
            weekDayOutput = "Tuesday";
            break;
        case 4:
            weekDayOutput = "Wednesday";
            break;
        case 5:
            weekDayOutput = "Thursday";
            break;
        case 6:
            weekDayOutput = "Friday";
            break;
    }

    std::cout << weekDayOutput << std::endl;

    return 0;
}
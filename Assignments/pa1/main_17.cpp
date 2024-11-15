#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    char gradeLetter;
    std::string gradeOutput;

    std::cin >> gradeLetter;

    if (gradeLetter == 'A' || gradeLetter == 'a') {
        gradeOutput = "Excellent";
    } else if (gradeLetter == 'B' || gradeLetter == 'b') {
        gradeOutput = "Good";
    } else if (gradeLetter == 'C' || gradeLetter == 'c') {
        gradeOutput = "Average";
    } else if (gradeLetter == 'D' || gradeLetter == 'd') {
        gradeOutput = "Poor";
    } else if (gradeLetter == 'F' || gradeLetter == 'f') {
        gradeOutput = "Failing";
    }
    std::cout << gradeOutput << std::endl;
    return 0;
}
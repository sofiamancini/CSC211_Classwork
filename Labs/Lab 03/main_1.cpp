#include <iostream>

int main(){
    int grade;
    std::cin >> grade;

    if (grade >= 97 && grade <= 100){
        std::cout << "A+";
    }
    else if (grade >= 93 && grade <= 96){
        std::cout << "A";
    }
    else if (grade >= 90 && grade <= 92){
        std::cout << "A-";
    }
    else if (grade >= 87 && grade <= 89){
        std::cout << "B+";
    }
    else if (grade >= 83 && grade <= 86){
        std::cout << "B";
    }
    else if (grade >= 80 && grade <= 82){
        std::cout << "B-";
    }
    else if (grade >= 77 && grade <= 79){
        std::cout << "C+";
    }
    else if (grade >= 73 && grade <= 76){
        std::cout << "C";
    }
    else if (grade >= 70 && grade <= 72){
        std::cout << "C-";
    }
    else if (grade >= 67 && grade <= 69){
        std::cout << "D+";
    }
    else if (grade >= 65 && grade <= 66){
        std::cout << "D";
    }
    else{
        std::cout << "F";
    }
    return 0;

}
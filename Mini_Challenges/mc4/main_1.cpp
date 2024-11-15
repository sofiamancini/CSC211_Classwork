#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    int testCase;
    std::cin >> testCase;

    for (int t = 0; t < testCase; ++t) {
        int numStudents, sum = 0;
        std::vector<int> grades;

        std::cin >> numStudents;
        for (int i = 0; i < numStudents; ++i) {
            int finalGrade;
            std::cin >> finalGrade;
            sum += finalGrade;
            grades.push_back(finalGrade);
        }

        double average = sum / static_cast<double>(numStudents);
        int aboveAverageCount = 0;
        for (int grade : grades) {
            if (grade > average) {
                ++aboveAverageCount;
            }
        }

        double aboveAveragePercentage = (aboveAverageCount / static_cast<double>(numStudents)) * 100.0;
        std::cout << std::fixed << std::setprecision(3) << aboveAveragePercentage << "%" << std::endl;
    }

    return 0;
}
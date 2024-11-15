// This code will store exam grades for multiple students into an array of vectors and then calculate the average grade for each student.

#include <iostream>
#include <vector>

const int numStudents = 4;
const int numExams = 3;

void printArray(int arr[][numExams]) {
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numExams; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void fillArray(int arr[][numExams]) {
    for (int i = 0; i < numStudents; i++) {
        for (int j = 0; j < numExams; j++) {
            std::cin >> arr[i][j];
        }
    }
}

void findStudentAverage(int arr[][numExams], double avg[]) {
    for (int i = 0; i < numStudents; i++) {
        double sum = 0;
        for (int j = 0; j < numExams; j++) {
            sum += arr[i][j];
        }
        avg[i] = sum / numExams;
    }
}

void findExamAverage(int arr[][numExams], double avg[]) {
    for (int i = 0; i < numExams; i++) {
        double sum = 0;
        for (int j = 0; j < numStudents; j++) {
            sum += arr[j][i];
        }
        avg[i] = sum / numStudents;
    }
}

int main() {
    int grades[numStudents][numExams];
    double studentAverages[numStudents], examAverages[numExams];

    fillArray(grades);
    printArray(grades);
    findStudentAverage(grades, studentAverages);
    findExamAverage(grades, examAverages);

    for (int i = 0; i < numStudents; i++) {
        std::cout << studentAverages[i] << std::endl;
    }

    for (int i = 0; i < numExams; i++) {
        std::cout << examAverages[i] << std::endl;
    }

    return 0;
}
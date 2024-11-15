// This code will return the number of students that request a specific course

#include <iostream>
#include <string>

// Void function to remove all duplicates in the student_info array
void remove_duplicate_students(std::string student_info[][3], int &num_students) {
    for (int i = 0; i < num_students; i++) {
        for (int j = i + 1; j < num_students; j++) {
            if (student_info[i][0] == student_info[j][0] && student_info[i][1] == student_info[j][1] && student_info[i][2] == student_info[j][2]) {
                for (int k = j; k < num_students - 1; k++) {
                    student_info[k][0] = student_info[k + 1][0];
                    student_info[k][1] = student_info[k + 1][1];
                    student_info[k][2] = student_info[k + 1][2];
                }
                num_students--;
                j--;
            }
        }
    }
}

void selection_sort(std::string course[], int counts[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (course[j].compare(course[min_index]) < 0) {
                min_index = j;
            }
        }
        std::swap(counts[i], counts[min_index]);
        std::swap(course[i], course[min_index]);
    }
}


void count_course_requests(std::string student_info[][3], int num_students, std::string course[], int counts[], int &num_courses) {
    num_courses = 0;

    for (int i = 0; i < num_students; i++) {
        bool found = false;
        for (int j = 0; j < num_courses; j++) {
            if (course[j] == student_info[i][2]) {
                counts[j]++;
                found = true;
                break;
            }
        }
        if (!found) {
            course[num_courses] = student_info[i][2];
            counts[num_courses] = 1;
            num_courses++;
        }
    }
}

int main () {
    int num_students;
    std::cin >> num_students;

    // Create an array to store student first name, last name, and course requested
    std::string student_info[num_students][3];
    for (int i = 0; i < num_students; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> student_info[i][j];
        }
    }
    
    remove_duplicate_students(student_info, num_students);

    std::string courses[num_students];
    int counts[num_students];
    int num_courses = 0;
    
    count_course_requests(student_info, num_students, courses, counts, num_courses);
    selection_sort(courses, counts, num_courses);

    for(int i = 0; i < num_courses; i++) {
        std::cout << courses[i] << " " << counts[i] << std::endl;
    }

    return 0; 
}
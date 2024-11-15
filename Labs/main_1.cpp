#include <iostream>

struct Rectangle {
    int width;
    int height;

    int area() {
        return width * height;
    }
};

class Circle {
    public:
        int radius;
        double area() {
            return 3.14 * radius * radius;
        }
};

class Employee {
    public:
        Employee();
        Employee(int id, std::string name, double salary);
        void print();
};

Employee::Employee() {
    id = 0;
    name = "";
    salary = 0;
}

Employee::Employee(int id, std::string name, double salary) {
    id = new_id;
    name = newName;
    salary = newSalary;
}

void Employee::print() {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Salary: " << salary << std::endl;
}


int main() {
    Rectangle r1;
    r1.width = 10;
    r1.height = 20;
    std::cout << r1.area() << std::endl;

    Circle c1;
    c1.radius = 10;
    std::cout << c1.area() << std::endl;

    Employee e1;
    e1.print();
}
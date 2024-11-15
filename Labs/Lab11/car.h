#include <string>

#ifndef LAB_11_CAR_H
#define LAB_11_CAR_H

class Car {
    std::string make;
    std::string model;
    std::string color;
    int year;
    double mileage;

public:
//Default constructor
    Car();

//Constructs a car object
    Car(std::string make, std::string model, std::string color, int year, double milage);

//Setters for objects of type car
    void setMake(std::string someMake);
    void setModel(std::string someModel);
    void setColor(std::string someColor);
    void setYear(int someYear);
    void setMileage(double someMileage);

//Getters for objects of type car
    std::string getMake();
    std::string getModel();
    std::string getColor();
    int getYear();
    double getMileage();

//Prints all member variables to console
    void printDetails();
};


#endif //LAB_11_CAR_H

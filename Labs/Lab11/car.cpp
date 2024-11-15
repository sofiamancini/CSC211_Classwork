#include <iostream>
#include "car.h"

Car::Car() {
    setMake("Chevrolet");
    setModel("Camaro");
    setColor("Yellow");
    setYear(2007);
    setMileage(0);
}

Car::Car(std::string make, std::string model, std::string color, int year, double mileage) {
    setMake(make);
    setModel(model);
    setColor(color);
    setYear(year);
    setMileage(mileage);
}

//set functions take someMake and sets make to that
void Car::setMake(std::string someMake) {
    make = someMake;
}

void Car::setModel(std::string someModel) {
    model = someModel;
}

void Car::setColor(std::string someColor) {
    color = someColor;
}

void Car::setYear(int someYear) {
    year = someYear;
}

void Car::setMileage(double someMileage) {
    mileage = someMileage;
}

//get functions get the some variables
std::string Car::getMake() {
    return make;
}

std::string Car::getModel() {
    return model;
}

std::string Car::getColor() {
    return color;
}

int Car::getYear() {
    return year;
}

double Car::getMileage() {
    return mileage;
}

void Car::printDetails() {
    std::cout << color << " " << model << " " << make << " " << year << " miles: " << mileage << "\n";
}
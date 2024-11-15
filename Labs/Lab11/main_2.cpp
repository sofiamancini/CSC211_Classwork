#include <iostream>
#include <string>
#include "car.h"



int main() {
    Car myCar("Nissan", "Rogue", "Silver", 2011, 125000);
    Car paytonsCar("Ford", "Fusion", "Blue", 2020, 74000);
    Car bigBlueWhale("Mercury", "Grand Marquis", "Navy", 2001, 200000);
    Car bumblebee;

    myCar.printDetails();
    paytonsCar.printDetails();
    bigBlueWhale.printDetails();
    bumblebee.printDetails();

    return 0;
}

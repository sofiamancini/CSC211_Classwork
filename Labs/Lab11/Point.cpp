
#include <iostream> 
#include <string>
#include <cmath>
#include "Point.h"

Point::Point(int someX, int someY, int someZ) {
   x = someX;
   y = someY;
   z = someZ;
}

void Point::setX(int someX) {
   x = someX;
}

void Point::setY(int someY) {
   y = someY;
}

void Point::setZ(int someZ) {
   z = someZ;
}

int Point::getX() {
   return x;
}

int Point::getY() {
   return y;
}

int Point::getZ() {
   return z;
}

std::string Point::toCord() {
   return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}

double Point::euDistance(Point p2) {
   return sqrt(pow(x - p2.getX(), 2) + pow(y - p2.getY(), 2) + pow(z - p2.getZ(), 2));
}


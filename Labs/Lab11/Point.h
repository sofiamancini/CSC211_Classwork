#include <string>
#include <iostream>
#ifndef POINT_H
#define POINT_H


class Point {
    public:
        int x;
        int y;
        int z;

//Constructs a point object with X, Y, Z properties
Point(int someX, int someY, int someZ);

//Sets the X, Y, and Z properties of a point Object
void setX(int someX);
void setY(int someY);
void setZ(int someZ);

//Gets the X, Y, and Z properties from a point Object
int getX();
int getY();
int getZ();

//Returns a cartesian coordinate representation of a point Object
// aka = (x,y,z)
std::string toCord();

//Calculates the Euclidean Distance of two points
double euDistance (Point p2);

};

#endif
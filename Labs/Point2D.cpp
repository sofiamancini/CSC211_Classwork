#include <iostream>
#include <string>
#include <cmath>

#ifndef POINT2D_H
#define POINT2D_H

template <typename T>

class Point2D {
    T x, y, z;
    public:
        Point2D() : x(0), y(0), z(0) {};
        Point2D(T someX, T someY, T someZ) : x(someX), y(someY), z(someZ) {};
        void setX(T x) { this->x = x; }
        void setY(T y) { this->y = y; }
        void setZ(T z) { this->z = z; }
        T getX() { return x; }
        T getY() { return y; }
        T getZ() { return z; }
        std::string toCord() { return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")"; }
};

#endif
#include <iostream>
#include <string>

#ifndef POINT2D_H
#define POINT2D_H

template <typename T>
class Point2D {
    private:
        T x;
        T y;
        T z;
    public:
        Point2D() : x(0), y(0), z(0) {};
        Point2D(T someX, T someY, T someZ) : x(someX), y(someY), z(someZ) {};
        void setX(T x);
        void setY(T y);
        void setZ(T z);
        T getX();
        T getY();
        T getZ();
        std::string toCord();
};

#endif
#include "Point.hpp"
#include <iostream>

namespace ariel{}
    Point::Point(double num1, double num2) : x(num1), y(num2){}
    double Point::distance(Point other){return 1.0;}
    void Point::print(){}
    Point Point::moveTowards(Point source, Point dest, double distance){return Point(1,2);}
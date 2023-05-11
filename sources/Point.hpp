#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
namespace ariel{}
class Point{
    protected: 
    double x ,y;
    public:
    Point(double num1, double num2);
    double distance(Point other);
    void print();
    Point moveTowards(Point source, Point dest, double distance);
};
#endif
#ifndef CHARACTER
#define CHARACTER
#include <iostream>
#include "Point.hpp"
using namespace std;

namespace ariel{}
class Character{
    protected:
    Point loaction;
    string name;
    public:
    bool isAlive()const;
    double distance(Point* other)const;
    void hit(int num)const;
    string getName()const;
    Point getLocation()const;
    virtual void print() const = 0;
};
#endif
#ifndef CHARACTER
#define CHARACTER
#include <iostream>
#include "Point.hpp"
using namespace std;

namespace ariel{}
class Character{
    protected:
    Point loaction_;
    string name_;
    public:
    bool isAlive()const;
    double distance(Point* other)const;
    void hit(int num)const;
    string getName()const;
    Point getLocation()const;
    virtual string print() const = 0;
    Character(string name, Point point);
    friend std::ostream& operator<<(std::ostream& ostreamm, const Character& other);

};
#endif
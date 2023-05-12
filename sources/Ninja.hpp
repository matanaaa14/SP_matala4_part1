#ifndef NINJA
#define NINJA
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"

using namespace std;

namespace ariel{}
class Ninja : public Character{
    protected:
    int speed;
    public:
    virtual void move(Character* enemy)const = 0;
    void slash(Character* enemy)const;
    Ninja(string name, Point point);
    string print() const;

};
#endif
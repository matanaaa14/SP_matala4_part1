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
    void move(Character* enemy);
    void slash(Character* enemy);
};
#endif
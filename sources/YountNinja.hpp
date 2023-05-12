#ifndef YOUNTNINJA
#define YOUNTNINJA
#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
using namespace std;

namespace ariel{}
class YountNinja : public Ninja{
    public:
    YountNinja(string name, Point point);
    void move(Character* enemy)const ;

};
#endif
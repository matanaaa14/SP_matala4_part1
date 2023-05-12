#ifndef COWBOY
#define COWBOY
#include <iostream>
#include "Character.hpp"
namespace ariel{}
using namespace std;
class Cowboy : public Character{
    protected:
    int numOfBullets;
    int life;
    public:
    void shoot(Character* enemy);
    bool hasboolets();
    void reload();
    Cowboy();
    Cowboy(string name, Point point);
    string print() const;
    friend std::ostream& operator<<(std::ostream& ostreamm, const Cowboy& other);

};
#endif
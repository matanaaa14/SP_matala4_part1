#include "Character.hpp"
#include <iostream>
using namespace std;
namespace ariel{}
    bool Character::isAlive()const{return false;}
    double Character::distance(Point* other)const{return 1.0;}
    void Character::hit(int num)const{}
    string Character::getName()const{return "hi";}
    Point Character::getLocation()const{return Point(1,2);}
    Character::Character(string name, Point point) : name_(name), loaction_(point){}
    ostream& operator<<(ostream& output,const Character& other){
        return output << "nothing";
      }
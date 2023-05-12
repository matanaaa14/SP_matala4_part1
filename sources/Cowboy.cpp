#include "Cowboy.hpp"
#include "Character.hpp"
#include <iostream>
namespace ariel{}
    void Cowboy::shoot(Character* enemy){}
    bool Cowboy::hasboolets(){return false;}
    void Cowboy::reload(){}
    string Cowboy::print() const{return "nothing";}
    Cowboy::Cowboy(string name, Point point) : Character(name,point){}
    ostream& operator<<(ostream& output,const Cowboy& other){
        return output << "nothing";
      }
#ifndef TEAM
#define TEAM
#include <iostream>
#include "Character.hpp"
using namespace std;

namespace ariel{}
class Team{
    protected:
    Character* arr[10];
    public:
    void add(Character* fighter);
    void attack();
    int stillAlive();
    void print();
    Team(Character* leader);
    ~Team();
};
#endif
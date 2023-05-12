#ifndef TEAM
#define TEAM
#include <iostream>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "YountNinja.hpp"

using namespace std;

namespace ariel{}
class Team{
    protected:
    Character* arr[10];
    public:
    void add(Character* fighter);
    void attack(Team* enemy);
    int stillAlive();
    void print();
    Team(Character* leader);
    ~Team();
};
#endif
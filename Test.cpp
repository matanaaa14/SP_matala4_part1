#include "doctest.h"
#include <iostream>
#include "sources/Team.hpp"
TEST_CASE("point"){
    Point p1(0,0);
    Point p2(1,1);
    CHECK_EQ(p1.distance(p2),1.414213562);
}
TEST_CASE("Cowboy"){
    Point point(1,2);
    Point p2(1.1,2.2);
    Cowboy c1("matan",point);
    Cowboy c2("sheldon",point);
    Character* cp = &c2;
    CHECK_EQ(c1.getLocation(),point);
    CHECK_NE(c1.getLocation(),p2);
    CHECK_EQ(c1.getName(),"matan");
    CHECK_NE(c1.getName(),"guy");
    CHECK_EQ(c1.isAlive(),true);
    CHECK_NE(c1.isAlive(),false);
    CHECK_EQ(c1.hasboolets(),true);
    CHECK_NE(c1.hasboolets(),false);
    CHECK_NOTHROW(c1.reload());
    CHECK_NOTHROW(c1.shoot(cp));    
}
TEST_CASE("Ninja"){
    Point p1(0,0);
    Point p2(3,4);
    Point p3(0,0);
    OldNinja on("old_man",p2);
    YountNinja yn("youing_man",p1);
    TrainedNinja tn("good_man",p3);
    Character* ch = &on;
    CHECK_EQ(on.getLocation(),p1);
    CHECK_NE(on.getLocation(),p2);
    CHECK_EQ(on.getName(),"old_man");
    CHECK_NE(on.getName(),"old_man");
    CHECK_EQ(on.isAlive(),true);
    CHECK_NE(on.isAlive(),false);
    CHECK_NOTHROW(yn.slash(ch));
    CHECK_THROWS(on.slash(ch));
    CHECK_NOTHROW(yn.move(ch));
    CHECK_THROWS(on.move(ch));
    
}
TEST_CASE("TEAM"){
    Point point(12,-7);
    OldNinja on("old_man",point);
    Character* ch = &on;
    Team team(ch);
    Cowboy cowboy("sheldon",point);
    Character* ch2 = &cowboy;
    Team team2(ch2);
    Team* teamP = &team2;
    TrainedNinja ninja("matan",point);
    Character* ninjaP = &ninja;
    CHECK_NOTHROW(team.print());
    CHECK_THROWS(team.attack(teamP));
    CHECK_THROWS(team2.attack(teamP));
    CHECK_THROWS(team.add(ch2));
    CHECK_EQ(team.stillAlive(),1);
    CHECK_NOTHROW(team.add(ninjaP));

}
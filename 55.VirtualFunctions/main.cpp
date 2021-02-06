#include <iostream>
#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"

using namespace std;

int main()
{
    Ninja Nin;
    Monster Mon;
    Enemy Rando;
    /* This is a different way of doing it, so that logically we still think of everything as enemies.
       This will be used for this tutorial to demonstrate virtual functions, which in a way could make more sense,
       and make some situations easier.*/
    // Setting each enemy to be a different type
    Enemy *enemy1 = &Nin;
    Enemy *enemy2 = &Mon;
    Enemy *enemy3 = &Rando;

    // Setting the attack power of every enemy
    enemy1->setAttackPower (29);
    enemy2->setAttackPower (50);
    enemy3->setAttackPower (1);

    // Look at the results and the classes to grasp both polymorphism and virtual functions
    enemy1->attack ();
    enemy2->attack ();
    enemy3->attack ();

    return 0;
}

#include <iostream>
#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"

using namespace std;

int main()
{
    Ninja Nin;
    Monster Mon;
    /* This is a different way of doing it, so that logically we still think of everything as enemies. */
    //    Enemy *enemy1 = &Nin;
    //    Enemy *enemy2 = &Mon;

    //    enemy1->setAttackPower (29);
    //    enemy2->setAttackPower (50);

    Nin.setAttackPower (29);
    Mon.setAttackPower (50);

    // Same function, does different things, because it is redefined in its respective class - Polymorphism
    Nin.attack ();
    Mon.attack ();

    return 0;
}

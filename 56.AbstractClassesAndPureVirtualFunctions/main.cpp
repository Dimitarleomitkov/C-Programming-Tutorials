#include <iostream>
#include "Enemy.h"
#include "Ninja.h"
#include "Monster.h"

using namespace std;

int main()
{
    // Look at the classes for the lesson.
    Ninja Nin;
    Monster Mon;

    Enemy *enemy1 = &Nin;
    Enemy *enemy2 = &Mon;

    enemy1->setAttackPower (29);
    enemy2->setAttackPower (50);

    enemy1->attack ();
    enemy2->attack ();

    return 0;
}

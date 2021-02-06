#include "Monster.h"
#include <iostream>

using namespace std;

Monster::Monster()
{
    //ctor
}

void Monster::attack ()
{
    cout << "Monster eats you! -" << attackPower << endl;
}

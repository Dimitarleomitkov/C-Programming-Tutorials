#include "Enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy()
{
    //ctor
}

void Enemy::setAttackPower (int AP)
{
    attackPower = AP;
}

void Enemy::attack ()
{
    cout << "Unknown enemy attack! -" << attackPower << endl;
}

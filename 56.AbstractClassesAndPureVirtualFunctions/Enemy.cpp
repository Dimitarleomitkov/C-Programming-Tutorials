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

void Enemy::enemyAttack ()
{
    cout << "Basic enemy attack! -" << 1 << endl;
}

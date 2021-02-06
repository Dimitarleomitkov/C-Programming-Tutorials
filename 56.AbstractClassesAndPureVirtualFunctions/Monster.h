#ifndef MONSTER_H
#define MONSTER_H

#include "Enemy.h"

class Monster : public Enemy
{
    public:
        Monster();
        // Ninja and Monster have the same function but it does different things.
        void attack();
    protected:
    private:
};

#endif // MONSTER_H

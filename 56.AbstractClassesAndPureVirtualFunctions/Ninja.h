#ifndef NINJA_H
#define NINJA_H

#include "Enemy.h"

class Ninja : public Enemy
{
    public:
        Ninja();
        // Ninja and Monster have the same function but it does different things.
        void attack();
    protected:
    private:
};

#endif // NINJA_H

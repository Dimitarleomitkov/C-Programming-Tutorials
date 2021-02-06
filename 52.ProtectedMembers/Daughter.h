#ifndef DAUGHTER_H
#define DAUGHTER_H

#include "Mother.h"

// This is the derived class. Inheriting everything public from Mother
class Daughter : public Mother
{
    public:
        Daughter();
        void doSomething();
    protected:
    private:
};

#endif // DAUGHTER_H

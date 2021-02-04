#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"

using namespace std;

class People
{
    public:
        People ();
    protected:
    private:
        string name;
        // This has a member variable, which is an object from another class
        Birthday date;
};

#endif // PEOPLE_H

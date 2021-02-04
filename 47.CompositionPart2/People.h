#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h"

using namespace std;

class People
{
    public:
        People (string Name, Birthday Date);
        void printInfo ();
    protected:
    private:
        string name;
        // This class has a member variable, which is an object from another class
        Birthday date;
};

#endif // PEOPLE_H

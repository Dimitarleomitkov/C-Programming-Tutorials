#include "Food.h"
#include <iostream>

using namespace std;

Food::Food (int number) : health (number)
{
    //ctor
}

void Food::printStuff ()
{
    // Self explanatory prints
    cout << "health = " << health << endl;
    cout << "this->health = " << this->health << endl;
    cout << "(*this).h = " << (*this).health << endl;
    /* "this" is a pointer to the current object.
       That way we have access to everything an object has,
       without the need to know the class or anything else, really.
       Aside from printing "this" is pretty useful. */
}

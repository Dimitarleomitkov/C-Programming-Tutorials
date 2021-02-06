#include "Ninja.h"
#include <iostream>

using namespace std;

Ninja::Ninja()
{
    //ctor
}

void Ninja::attack ()
{
    cout << "Ninja chop! -" << attackPower << endl;
}

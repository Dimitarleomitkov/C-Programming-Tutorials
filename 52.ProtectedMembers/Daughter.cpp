#include "Daughter.h"
#include <iostream>

using namespace std;


Daughter::Daughter ()
{
    //ctor
}

void Daughter::doSomething ()
{
    // We cannot do privateVar = 5; We can do everything else
    publicVar = 5;
    protectedVar = 11;
}
